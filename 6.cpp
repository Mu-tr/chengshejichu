#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a,b,c;
signed main(){
	cin>>n;
	c=n%60;
	b=n/60;
	a=b/60;
	b%=60;
	cout<<a<<":"<<b<<":"<<c;
	return 0;
}
