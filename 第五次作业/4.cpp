#include<bits/stdc++.h>
#define int long long
using namespace std;
int T,n;
double a[100005],sum;
signed main(){
    cin>>T;
    while(T--){
        cin>>n;sum=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        sum/=(double)n;
        int ans=0;
        for(int i=1;i<=n;i++) if(a[i]>sum) ans++;
        cout<<ans<<"\n";
    }
    return 0;
}