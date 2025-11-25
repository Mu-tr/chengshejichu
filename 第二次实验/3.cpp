#include<bits/stdc++.h>
#define int long long
using namespace std;
int a,n,b,cnt;
bool flag=0;
inline void solve(){
	cnt++;
	if(b<0){
        puts("Game Over");
        flag=1;
    }
	else if(b>a) puts("Too big");
	else if(b<a) puts("Too small");
	else{
		if(cnt==1) puts("Bingo!");
		else if(cnt<=3) puts("Lucky You!");
		else puts("Good Guess!");
		flag=1;
	}
}
signed main(){
	cin>>a>>n;
	cin>>b;
	solve();
	if(flag) return 0; 
	else if(cnt==n){
		puts("Game Over"); 
		return 0;
	}
	while(1){
		cin>>b;
		solve();
		if(flag) break;
		else if(cnt==n){
			puts("Game Over");
			break;
		}
	}
	return 0;
}
