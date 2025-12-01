#include<bits/stdc++.h>
using namespace std;
string s,ans;
char t;
int T;
int main(){
    cin>>T;
    while(T--){
        cin>>s>>t;ans.clear();
        for(int i=0;i<(int)s.size();i++){
            if(s[i]!=t) ans+=s[i];
        }
        if(ans.empty()) cout<<"NULL\n";
        else cout<<ans<<"\n";
    }
    return 0;
}