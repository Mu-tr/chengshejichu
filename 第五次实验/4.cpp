#include<bits/stdc++.h>
using namespace std;
int T;
string a;
stack<char> q;
int main(){
    cin>>T;
    while(T--){
        while(!q.empty()) q.pop();
        cin>>a;
        bool f=1;
        for(int i=0;i<(int)a.size();i++){
            if(a[i]=='(') q.push(a[i]);
            if(a[i]==')'){
                if(!q.empty()&&q.top()=='(') q.pop();
                else f=0;
            }
            if(a[i]=='[') q.push(a[i]);
            if(a[i]==']'){
                if(!q.empty()&&q.top()=='[') q.pop();
                else f=0;
            }
            if(a[i]=='{') q.push(a[i]);
            if(a[i]=='}'){
                if(!q.empty()&&q.top()=='{') q.pop();
                else f=0;
            }
            if(!f) break;
        }
        if(!q.empty()) f=0;
        if(f) puts("Yes");
        else puts("No");
    }
    return 0;
}