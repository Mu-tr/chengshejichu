#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[15],mx=-1e9,t;
signed main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>mx){
			mx=a[i];t=i-1;
		}
	}
	cout<<mx<<" "<<t;
	return 0;
}
