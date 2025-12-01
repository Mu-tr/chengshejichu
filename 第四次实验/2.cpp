#include<bits/stdc++.h>
using namespace std;
int y,n;
bool v[10];
int main(){
    cin>>y>>n;
    for(int i=y;i;i++){
        memset(v,0,sizeof(v));
        if(i<1000) v[0]=1;
        int t=i;
        while(t){
            v[t%10]=1;
            t/=10;
        }
        int cnt=0;
        for(int j=0;j<10;j++) if(v[j]) cnt++;
        if(cnt==n){
            cout<<i-y<<" ";
            if(i<10) cout<<"000"<<i;
            else if(i<100) cout<<"00"<<i;
            else if(i<1000) cout<<"0"<<i;
            else cout<<i;
            break;
        }
    }
    return 0;
}