#include<bits/stdc++.h>
#define int long long
using namespace std;
int a,b,c,d;
double w1,w2,eps=1e-10;
signed main(){
	scanf("%lld/%lld %lld/%lld",&a,&b,&c,&d);
	w1=(double)a/b;
	w2=(double)c/d;
	if(fabs(w1-w2)<=eps) cout<<a<<"/"<<b<<" = "<<c<<"/"<<d<<"\n";
	else if(w1>w2) cout<<a<<"/"<<b<<" > "<<c<<"/"<<d<<"\n";
	else cout<<a<<"/"<<b<<" < "<<c<<"/"<<d<<"\n";
	return 0;
}
/*
        1
       1   1
      1   2   1
     1   3   3   1
    1   4   6   4   1
   1   5  10  10   5   1
*/