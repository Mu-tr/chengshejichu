#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[10][10],t1,t2,sum,b[25]={0,0,0,0,0,0,10000,36,720,360,80,252,108,72,54,180,72,180,119,36,306,1080,144,1800,3600};
bool v[15]; 
signed main(){
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++) cin>>a[i][j],v[a[i][j]]=1;
	}
	int d;
	for(int i=1;i<=9;i++){
		if(!v[i]){
			d=i;
			break;
		}
	}
	for(int i=1;i<=3;i++) for(int j=1;j<=3;j++) if(a[i][j]==0) a[i][j]=d;
	for(int i=1;i<=3;i++){
		cin>>t1>>t2;
		cout<<a[t1][t2]<<"\n";
	}
	cin>>t1;
	if(t1<=3){
		for(int i=1;i<=3;i++) sum+=a[t1][i];
		cout<<b[sum]<<"\n";
	}
	else if(t1<=6){
		t1-=3;
		for(int i=1;i<=3;i++) sum+=a[i][t1];
		cout<<b[sum]<<"\n";
	}
	else if(t1==7){
		for(int i=1;i<=3;i++) sum+=a[i][i]; 
		cout<<b[sum]<<"\n";
	}
	else{
		for(int i=1;i<=3;i++) sum+=a[4-i][i];
		cout<<b[sum]<<"\n";
	}
	return 0;
}
