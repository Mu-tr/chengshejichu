#include<iostream>
#define int long long
using namespace std;
int n,s=1;
signed main(){
    cin>>n;
    for(int i=1;i<=n;i++) s*=i;
    cout<<s;
    return 0;
}