#include<bits/stdc++.h>
#define int long long
using namespace std;
int T,t1,t2,t3,t4;
bool flag;
inline int gcd(int x,int y){
    if(!y) return x;
    return gcd(y,x%y);
}
inline void dfs(int x,int y,int z){
    if(gcd(x,gcd(y,z))>=t4){
        cout<<setw(2)<<setfill('0')<<x;
        cout<<":";
        cout<<setw(2)<<setfill('0')<<y;
        cout<<":";
        cout<<setw(2)<<setfill('0')<<z;
        cout<<"\n";
        flag=1;
        return;
    }
    if(x==23&&y==59&&z==59) return;
    else if(y==59&&z==59) dfs(x+1,0,0);
    else if(z==59) dfs(x,y+1,0);
    else dfs(x,y,z+1);
}
signed main(){
    cin>>T;
    while(T--){
        scanf("%lld:%lld:%lld %lld",&t1,&t2,&t3,&t4);
        flag=0;
        dfs(t1,t2,t3);
        if(!flag) puts("-1");
    }
    return 0;
}