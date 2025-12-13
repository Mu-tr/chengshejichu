#include<bits/stdc++.h>
#define int long long
#define M 998244353
using namespace std;
int n,m,t1,a[100005],b[100005],t[100005],sum[100005],ans;
vector<int> e[100005];
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>t[i],b[i]=i;
    for(int i=1;i<=m;i++){
        cin>>t1;
        for(int j=1;j<=t1;j++){
            cin>>a[j];
        }
        for(int j=t1-1;j>=1;j--) swap(b[a[j]],b[a[j+1]]);
        for(int j=1;j<=t1;j++) e[b[a[j]]].push_back(a[j]);
        for(int j=1;j<t1;j++) swap(b[a[j]],b[a[j+1]]);
    }
    for(int i=1;i<=n;i++){
        sum[i]=(m-e[i].size())*(n-i);
        for(int j=0;j<(int)e[i].size();j++) sum[i]+=(n-e[i][j]);
    }
    sort(sum+1,sum+1+n);
    sort(t+1,t+1+n);
    for(int i=1;i<=n;i++){
        int d1=t[i]%M,d2=sum[n+1-i]%M;
        ans=(ans+(d1*d2%M))%M;
    }
    cout<<ans;
    return 0;
}