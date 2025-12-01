#include<bits/stdc++.h>
using namespace std;
int n,m,a[25],b[25];
map<int,int> v1,v2;
vector<int> e;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    cin>>m;
    for(int i=1;i<=m;i++) cin>>b[i];
    for(int i=1;i<=n;i++){
        bool f=0;
        for(int j=1;j<=m;j++) if(a[i]==b[j]) f=1;
        if(!f&&!v1[a[i]]) e.push_back(a[i]),v1[a[i]]=1;
    }
    for(int i=1;i<=m;i++){
        bool f=0;
        for(int j=1;j<=n;j++) if(b[i]==a[j]) f=1;
        if(!f&&!v2[b[i]]) e.push_back(b[i]),v2[b[i]]=1;
    }
    for(int i=0;i<(int)e.size();i++){
        cout<<e[i];
        if((i+1)<(int)e.size()) cout<<" ";
    }
    return 0;
}