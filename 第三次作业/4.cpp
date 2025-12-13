#include<bits/stdc++.h>
#define int long long
using namespace std;
string s;
signed main(){
	cin>>s;
	int sz=(int)s.size();
	for(int i=0;i<sz;i++){
		cout<<s[i];
		if((i+1)<sz) cout<<"   ";
	}
	return 0;
}
/*
* * * 
 * * *
* * * 
*/