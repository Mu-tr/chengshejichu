#include<bits/stdc++.h>
using namespace std;
int n,r,a[1005];
int main(){
    cin>>n>>r;
    for(int i=1;i<=n;i++) cin>>a[i];
    if((r<<1)<n){
        sort(a+1+r,a+n+1-r);
    }
    for(int i=1;i<=n;i++){
        cout<<a[i];
        if(i<n) cout<<" ";
    }
    return 0;
}