#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[10005],sum=0;
double t;
signed main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	double av=(double)sum/(double)n;
//	cout<<av<<"\n"; 
	for(int i=1;i<=n;i++){
		t+=((av-(double)a[i])*(av-(double)a[i]));
	}
	t/=(double)n; 
	t=sqrt(t);
	cout<<fixed<<setprecision(5)<<t;
	return 0;
}
