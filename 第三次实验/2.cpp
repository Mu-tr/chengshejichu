#include<bits/stdc++.h>
#define int long long
using namespace std;
string s,b;
char a;
signed main(){
	getline(cin,s);
	getline(cin,b);
	int ans=0;
	for(int i=0;i<(int)s.size();i++){
		if(s[i]==b[0]) ans++;
	}
	cout<<ans;
	return 0;
}
