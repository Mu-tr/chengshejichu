#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,q,t1,ans[200005],ans2[200005],sum[200005];
struct ok{
    int d,z;
    bool operator < (const ok &A) const{
        if(z==A.z) return d>A.d;
        return z>A.z;
    }
}a[200005];
signed main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>t1;
        a[i].d=i;a[i].z=t1;
    }
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++) sum[i]=sum[i-1]+a[i].z;
    int t=0;
    for(int i=1;i<=n;i++){
        if(a[i].d>t){
            t=a[i].d;
            ans[i]=t;
            ans2[i]=sum[i-1]-a[i].z*(i-1);
        }
        else ans[i]=ans[i-1],ans2[i]=ans2[i-1];
    }
    cin>>q;
    for(int i=1;i<=q;i++){
        cin>>t1;
        int d=upper_bound(ans2+1,ans2+1+n,t1)-ans2-1;
        cout<<ans[d]<<"\n";
    }
    return 0;
}