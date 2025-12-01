#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[15],mx,mn,t1,t2; 
signed main(){
	cin>>n;
	mx=-1e18;mn=1e18;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<mn) mn=a[i],t2=i;
	}
	swap(a[t2],a[1]);
	for(int i=1;i<=n;i++) if(a[i]>mx) mx=a[i],t1=i;
	swap(a[t1],a[n]);
	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	return 0;
}
