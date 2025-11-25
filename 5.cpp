#include<bits/stdc++.h>
#define int long long
using namespace std;
char s[2005];
int n=3;
signed main(){
	scanf("%s",s+1);
	reverse(s+1,s+4);
	int t=1;
	while((t<3)&&(s[t]=='0')) t++;
	for(int i=t;i<=3;i++) cout<<s[i];
	return 0;
}
