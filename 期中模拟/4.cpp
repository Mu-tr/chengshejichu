#include<bits/stdc++.h>
using namespace std;
int n,t,mx;
map<int,int> mp;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>t;
        mp[t]++;
        if(mp[t]>mp[mx]) mx=t;
    }
    cout<<mx<<" "<<mp[mx];
    return 0;
}