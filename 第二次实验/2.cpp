#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
vector<int> e[15];
signed main(){
	for(int i=100;i<10000000;i++){
		int d=i,cnt=0,sum=0;
		while(d){
			cnt++;
			d/=10;
		}
		d=i;
		while(d){
			int e=d%10;
			sum+=pow(e,cnt);
			d/=10;
		}
		if(sum==i) e[cnt].push_back(i);
	}
	cin>>n;
	for(int i=0;i<(int)e[n].size();i++) cout<<e[n][i]<<"\n";
	return 0;
}
