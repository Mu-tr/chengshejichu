#include<bits/stdc++.h>
using namespace std;
int l,r,a[10005],b[10005];
bool v[10005],vis[10005];
map<int,int> mp;
bool js(int x){
    if(x==1) return 1;
    if(mp[x]) return 0;
    a[x]++;mp[x]=1;
    int t=x,cnt=0;
    while(t){
        int d=t%10;
        cnt+=(d*d);
        t/=10;
    }
    return js(cnt);
}
int main(){
    for(int i=2;i<=10000;i++){
        if(!v[i]){
            for(int j=i+i;j<=10000;j+=i) v[j]=1;
        }
    }
    cin>>l>>r;
    for(int i=l;i<=r;i++){
        mp.clear();
        vis[i]=js(i);
        b[i]=mp.size();
    }
    bool flag=0;
    for(int i=l;i<=r;i++){
        if(vis[i]&&a[i]==1){
            int z=b[i];
            flag=1;
            if(!v[i]) z*=2;
            cout<<i<<" "<<z<<"\n";
        }
    }
    if(!flag) cout<<"SAD";
    return 0;
}