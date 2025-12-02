#include<bits/stdc++.h>
#define int long long
using namespace std;
int n0,n1,n,mn=1e9,t1,t2;
signed main(){
	cin>>n0>>n1>>n;
	for(int i=2;i<=n0;i++){
		if(!(n0%i)){
			int d=n-n0/i;
			if(!(n1%d)){
				int d1=i,d2=n1/d;
				int z=abs(d1-d2);
				if(z<mn){
					mn=z;
					t1=n0/d1;
					t2=n1/d2;
				}
			}
		}
	}
	if(mn==1e9) cout<<"No Solution";
    else cout<<t1<<" "<<t2;
	return 0;
}
