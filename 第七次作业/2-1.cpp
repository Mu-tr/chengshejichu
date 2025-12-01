#include<bits/stdc++.h>
using namespace std;
int t1,t3,t4,n;
string t2;
class apple{
    public:
    string id;
    int w,d;
    apple(string x,int y,int z){
        id=x;w=y;d=z;
    }
};
ostream &operator << (ostream &cout,const apple &A){
    cout<<A.id<<" "<<A.w<<" "<<A.d<<"\n";
    return cout;
}
class basket{
    public:
    vector<apple> a;
    void add(apple x){
        a.push_back(x);
    }
    apple js(){
        int mx=-1e9,z=-1;
        for(int i=0;i<(int)a.size();i++){
            if(a[i].w>mx) mx=a[i].w,z=i;
        }
        return a[z];
    }
}e[1000005];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>t1>>t2>>t3>>t4;
        apple t(t2,t3,t4);
        e[t1].add(t);
    }
    for(int i=1;i<=999999;i++){
        if(e[i].a.empty()) continue;
        cout<<i<<" "<<e[i].js();
    }
    return 0;
}