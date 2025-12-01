#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,c[15][15];
signed main(){
	cin>>n;
	for(int i=0;i<n;i++) c[i][0]=1;
	for(int i=1;i<n;i++){
		for(int j=1;j<=i;j++) c[i][j]=c[i-1][j-1]+c[i-1][j];
	}
	for(int i=0;i<n;i++){
		for(int j=1;j<=(n-1-i);j++) cout<<" ";
		for(int j=0;j<=i;j++) cout<<setw(4)<<c[i][j];
		cout<<"\n";
	}
	return 0;
}
