#include<bits/stdc++.h>
using namespace std;
int n;
string a;
int main(){
    cin>>n;
    stringstream ss;
    ss<<hex<<n;
    string s=ss.str();
    for(int i=1;i<=(8-s.size());i++) a+='0';
    a+=s;
    cout<<a<<"\n";
    for(int i=6;i>=0;i-=2){
        cout<<a[i]<<a[i+1];
        if(i) cout<<" ";
    }
    return 0;
}