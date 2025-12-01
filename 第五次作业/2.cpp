#include<bits/stdc++.h>
using namespace std;
int n;
double a,mx=-1e9,mn=1e9,sum=0;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        mx=max(mx,a);
        mn=min(mn,a);
        sum+=a;
    }
    sum/=(double)n;
    cout<<"average = "<<fixed<<setprecision(2)<<sum<<"\n";
    cout<<"max = "<<fixed<<setprecision(2)<<mx<<"\n";
    cout<<"min = "<<fixed<<setprecision(2)<<mn;
    return 0;
}