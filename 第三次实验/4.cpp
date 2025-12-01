#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[10][10];
signed main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) cin>>a[i][j];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int d=a[i][j];
			bool f=1;
			for(int g=1;g<=n;g++){
				if(a[i][g]>d) f=0;
			}
			for(int g=1;g<=n;g++){
				if(a[g][j]<d) f=0;
			}
			if(f){
				cout<<i-1<<" "<<j-1;
				return 0;
			}
		}
	}
	cout<<"NONE";
	return 0;
}
