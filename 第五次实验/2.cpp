#include<bits/stdc++.h>
using namespace std;
int T,n;
string a[100005];
inline bool cmp(const string &A,const string &B){
    return A+B>B+A;
}
int main(){
    while(cin>>n){
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+1+n,cmp);
        for(int i=1;i<=n;i++) cout<<a[i];
        cout<<"\n";
    }
    return 0;
}