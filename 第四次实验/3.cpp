#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[100005],cnt;
bool v[100005];
signed main(){
    for(int i=2;i<=100000;i++){
        if(!v[i]){
            a[++cnt]=i;
            for(int j=i+i;j<=100000;j+=i) v[j]=1;
        }
    }
    cin>>n;
    for(int i=1;i<=cnt;i++){
        int d=n-a[i];
        if(d<=100000){
            if(!v[d]){
                cout<<n<<" = "<<a[i]<<" + "<<d;
                break;
            }
        }
        else{
            bool f=1;
            for(int j=1;(a[j]*a[j]<=d);j++){
                if(!(d%a[j])){
                    f=0;
                    break;
                }
            }
            if(f){
                cout<<n<<" = "<<a[i]<<" + "<<d;
                break;
            }
        }
    }
    return 0;
}