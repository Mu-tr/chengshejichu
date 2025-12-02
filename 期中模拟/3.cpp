#include<bits/stdc++.h>
using namespace std;
int n;
double sum;
int main(){
    cin>>n;
    for(int i=1,j=1;i<=n;i++,j+=2){
        double w=(double)i/(double)j;
        if(i&1) sum+=w;
        else sum-=w;
    }
    cout<<fixed<<setprecision(3)<<sum;
    return 0;
}