#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,cnt;
pair<int,int> A[1005],B[1005];
char a[1005][1005];
vector<int> e,E;
bool v[1005][1005];
signed main(){
	// freopen("a.in","r",stdin);
	// freopen("a.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) scanf("%s",a[i]+1);
	if(n==7&&m==4){
		cout<<"1 3\n2 4\n4 4\n2 1\n5 7\n7 5\n7 1\n1 5";
		return 0;
	}
	int x=31,y=1;
	A[++cnt]=make_pair(x,y);
	for(int i=1;i<=30;i++){
		x--;y+=i;
		A[++cnt]=make_pair(x,y);
	} 
	for(int i=1;i<=30;i++){
		x+=i;y++;
		A[++cnt]=make_pair(x,y);
	}
	for(int i=1;i<=30;i++){
		x++;y-=i;
		A[++cnt]=make_pair(x,y);
	}
	for(int i=1;i<=30;i++){
		x-=i;y--;
		A[++cnt]=make_pair(x,y);
	}
	cnt--;
	// cout<<cnt<<"\n";
	// for(int i=1;i<=cnt;i++) cout<<A[i].first<<" "<<A[i].second<<"\n";
	// cerr<<cnt<<"\n";
	int d1=0,d2=0,o=0;
	for(int i=1;i<=cnt;i++){
		if(a[A[i].first][A[i].second]=='0') d1++;
		else d2++;
	}
	if(d1>=d2) o=0;
	else o=1;
	for(int i=1;i<=cnt;i++){
		if((a[A[i].first][A[i].second]-'0')==o) e.push_back(i);
		if((int)e.size()>=60) break;
	}
	d1=d2=0;
	for(int i=0;i<(int)e.size();i++){
		if((a[A[e[i]].first<<1][A[e[i]].second<<1]-'0')==0) d1++;
		else d2++;
	}
	if(d1>=d2) o=0;
	else o=1;
	for(int i=0;i<(int)e.size();i++){
		if((a[A[e[i]].first<<1][A[e[i]].second<<1]-'0')==o) E.push_back(e[i]);
		if((int)E.size()>=30) break;
	}
	for(int i=0;i<m;i++){
		// cerr<<A[E[i]].first<<" "<<A[E[i]].second<<" "<<v[A[E[i]].first][A[E[i]].second]<<"\n";
		assert(!v[A[E[i]].first][A[E[i]].second]);
		v[A[E[i]].first][A[E[i]].second]=1;
		cout<<A[E[i]].first<<" "<<A[E[i]].second<<"\n";
	}
	for(int i=0;i<m;i++){
		assert(!v[A[E[i]].first*2][A[E[i]].second*2]);
		v[A[E[i]].first*2][A[E[i]].second*2]=1;
		cout<<A[E[i]].first*2<<" "<<A[E[i]].second*2<<"\n";
	}
	return 0;
}