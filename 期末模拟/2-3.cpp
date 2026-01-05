#include<iostream>
using namespace std;
int n,m,X,Y,l1,r1,l2,r2,t1;
int main(){
    cin>>n>>m>>X>>Y;
    l1=r1=X;l2=r2=Y;
    for(int i=1;i<=n;i++){
        cin>>t1;
        l1=min(l1,t1);
        r1=max(r1,t1);
    }
    for(int i=1;i<=m;i++){
        cin>>t1;
        l2=min(l2,t1);
        r2=max(r2,t1);
    }
    if(l1>l2) swap(l1,l2),swap(r1,r2);
    if(r1<l2) cout<<X<<" and "<<Y<<": impossible";
    else cout<<X<<" and "<<Y<<": possible";
    return 0;
}