#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,k,t1,b[151],c[15][15];
string a[105];
signed main(){
	scanf("%lld %lld\n",&n,&m); 
	for(int i=1;i<=n;i++){
//		cout<<i<<"\n"; 
		getline(cin,a[i]);
	}
//	cout<<"bom\n"; 
	for(int i=1;i<=m;i++){
		cin>>t1;
		b[t1]=i;
	}
	for(int i=1;i<=m;i++){
		for(int j=0;j<=9;j++) cin>>c[i][j];
	}
	cin>>k;
	for(int i=1;i<=k;i++){
		cin>>t1;
		int d1=t1/10,d2=t1%10;
		d1=b[d1];
		if(d1==0||c[d1][d2]==-1) puts("?");
		else cout<<a[c[d1][d2]]<<"\n";
	}
	return 0;
}
