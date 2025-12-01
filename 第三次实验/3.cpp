#include<bits/stdc++.h>
#define int long long
using namespace std;
char s[100];
int sz,a[10];
bool v[10];
vector<int> e;
signed main(){
	scanf("%s",s+1);
	sz=strlen(s+1);
	for(int i=1;i<=sz;i++){
		int d=s[i]-'0';
		v[d]=1;
	}
	for(int i=9;i>=0;i--){
		if(v[i]){
			e.push_back(i);
			a[i]=(int)e.size()-1;
		}
	}
	cout<<"int[] arr = new int[]{";
	for(int i=0;i<(int)e.size();i++){
		cout<<e[i];
		if((i+1)<(int)e.size()) cout<<",";
	}
	cout<<"};\n";
	cout<<"int[] index = new int[]{";
	for(int i=1;i<=sz;i++){
		int d=s[i]-'0';
		cout<<a[d];
		if(i<sz) cout<<",";
	}
	cout<<"};";
	return 0;
}
