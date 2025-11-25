#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
double ans;
signed main(){
	cin>>n;
	if(n<0){
		puts("Invalid Value!");
		return 0;
	} 
	else if(n<=50) ans=(double)n*0.53;
	else{
		ans=26.5+(n-50.0)*0.58;
	}
	cout<<"cost = "; 
	cout<<fixed<<setprecision(2)<<ans;
	return 0;
}
