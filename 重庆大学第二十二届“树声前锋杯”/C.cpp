#include<bits/stdc++.h>
#define int long long
using namespace std;
int l=1,r,f[305][105],t1=170,t2=1,ans=1;
string ch;
inline int dfs(int x,int y){
    if((x-y)<=0) return 1;
    if(f[x][y]) return f[x][y];
    return f[x][y]=dfs(x-y,y)+dfs(x-y,y+1);
}
signed main(){ 
    cin>>r;
    while(((t1-t2)>=0)&&(l<=r)){
        int d1=dfs(t1-t2,t2+1);
        int w=min(l+d1-1,r);
        cout<<w<<endl;
        cin>>ch;
        if(ch==">=") ans=max(ans,w),l=w+1,t1-=t2;
        else r=w-1,t1-=t2,t2++;
    }
    cout<<"! "<<ans<<endl;
    return 0;
}