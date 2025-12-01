#include<bits/stdc++.h>
using namespace std;
int n,m,a[15];
pair<int,int> b[15];
inline bool cmp(pair<int,int> A,pair<int,int> B){
    if(A.first==B.first) return A.second<B.second;
    return A.first>B.first;
}
signed main(){
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++) cin>>a[j];
        sort(a+1,a+1+n);
        b[i].second=i;
        for(int j=2;j<n;j++) b[i].first+=a[j];
        // cout<<i<<" "<<b[i].first<<"\n";
    }
    sort(b+1,b+1+m,cmp);
    for(int i=1;i<=m;i++) printf("%3d",b[i].second);
    return 0;
}