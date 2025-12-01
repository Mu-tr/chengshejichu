#include<bits/stdc++.h>
using namespace std;
int n;
string t1,t2;
queue<string> q;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>t1;
        if(t1=="in"){
            cin>>t2;
            q.push(t2);
        }
        if(t1=="out") q.pop();
        if(t1=="q"){
            if(q.empty()) puts("NULL");
            else cout<<q.front()<<"\n";
        }
    }
    return 0;
}