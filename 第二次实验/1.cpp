#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[1005],t1,t2;
signed main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]&1) t1++;
		else t2++;
	}
	cout<<t1<<" "<<t2;
	return 0;
}
