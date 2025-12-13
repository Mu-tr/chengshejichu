#include<bits/stdc++.h>
using namespace std;
bitset<10000005> v;
vector<int> e;
int T,a;
int main(){
    v[1]=v[0]=1;
    for(int i=2;i<=10000000;i++){
        if(!v[i]){
            e.push_back(i);
            for(int j=i+i;j<=10000000;j+=i) v[j]=1;
        }
    }
    cin>>T;
    while(T--){
        cin>>a;
        bool f=0;
        for(int i=0;(i<(int)e.size())&&(e[i]<a);i++){
            int d=e[i];
            if(!v[a%d]){
                f=1;
                cout<<d<<"\n";
                break;
            }
        }
        if(!f) puts("-1");
    }
    return 0;
}