#include<bits/stdc++.h>
#define int long long
using namespace std;
string s;
int cnt=0;
signed main(){
	cin>>s;
	for(int i=0;i<(int)s.size();i++){
		int d=s[i]-'0';
		cnt+=d;
	}
	cout<<cnt;
	return 0;
}
