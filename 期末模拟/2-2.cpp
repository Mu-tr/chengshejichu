#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
string a,b;
signed main(){
    cin>>n;
    cin>>a>>b;
    bool f=1;
    for(int i=0;i<n;i++) if(a[i]!=b[n-1-i]) f=0;
    if(f) cout<<a<<" and "<<b<<" are reverse.";
    else cout<<a<<" and "<<b<<" are not reverse.";
    return 0;
}