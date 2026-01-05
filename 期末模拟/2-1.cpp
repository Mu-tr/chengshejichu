#include<bits/stdc++.h>
#define int long long
using namespace std;
int a,b;
signed main(){
    cin>>a>>b;
    if(a%b) cout<<a-b;
    else cout<<a+b;
    return 0;
}