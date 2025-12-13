#include<bits/stdc++.h>
#define int long long
using namespace std;
int T,n,m,a[1005],b[1005],h[1005];
char s[1005];
struct ok{
    int z[1005];
    void init(){
        memset(z,0,sizeof(z));
    }
    void check(){
        for(int i=n;i>=1;i--){
            int d=z[i]/h[i];
            z[i]%=h[i];
            z[i-1]+=d;
        }
    }
    bool operator == (const ok &A) const{
        for(int i=1;i<=n;i++){
            if(z[i]!=A.z[i]) return 0;
        }
        return 1;
    }
}A,B;
inline ok js(ok &x,ok &y){
    ok C;C.init();
    for(int i=1;i<=n;i++) C.z[i]=A.z[i]+B.z[i];
    for(int i=1;i<=n;i++){
        if(C.z[i]&1) C.z[i+1]+=h[i+1];
        C.z[i]/=2;
    }
    C.check();
    return C;
}
inline void solve(){
    A.init();B.init();
    for(int i=1;i<=n;i++) B.z[i]=h[i]-1;
    for(int i=1;i<=m;i++){
        if(A==B) break;
        ok w=js(A,B);
        if(s[i]=='0') A=w;
        else{
            w.z[n]++;
            w.check();
            B=w;
        }
    }
    for(int i=1;i<=n;i++) cout<<A.z[i]+a[i]<<" ";
    cout<<"\n";
}
signed main(){
    cin>>T;
    while(T--){
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            cin>>a[i]>>b[i];
            h[i]=b[i]-a[i]+1;
        }
        scanf("%s",s+1);
        solve();
    }
    return 0;
}