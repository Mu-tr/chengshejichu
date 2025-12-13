#include<bits/stdc++.h>
#define int long long
using namespace std;
int T,n,m,a[505][505];
signed main(){
    cin>>T;
    while(T--){
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>a[i][j];
            }
        }
        int ans=0;
        for(int i=1;i<n;i++){
            int d=0;
            for(int j=1;j<=m;j++) d=max(a[i][j]-a[i+1][j],d);
            ans+=d;
        }
        for(int i=1;i<m;i++){
            int d=0;
            for(int j=1;j<=n;j++){
                d=max(d,a[j][i]-a[j][i+1]);
            }
            ans+=d;
        }
        cout<<ans<<"\n";
    }
    return 0;
}