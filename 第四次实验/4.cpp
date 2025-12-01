#include<bits/stdc++.h>
#define int long long
using namespace std;
int L,K,a[100005],cnt;
bool v[100005];
string s;
inline bool check(int x){
    if(x<=1) return 0;
    if(x<=100000) return v[x]^1;
    for(int i=1;a[i]*a[i]<=x;i++){
        if(!(x%a[i])) return 0;
    }
    return 1;
}
signed main(){
    for(int i=2;i<=100000;i++){
        if(!v[i]){
            a[++cnt]=i;
            for(int j=i+i;j<=100000;j+=i) v[j]=1;
        }
    }
    cin>>L>>K;
    cin>>s;
    for(int i=0;(i+K-1)<L;i++){
        int t=0;
        for(int j=i;j<(i+K);j++){
            int d=s[j]-'0';
            t*=10;
            t+=d;
        }
        if(check(t)){
            for(int j=i;j<(i+K);j++){
                if(s[j]=='0') cout<<0;
                else break;
            }
            cout<<t;
            return 0;
        }
    }
    cout<<404;
    return 0;
}