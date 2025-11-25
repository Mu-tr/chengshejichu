#include<bits/stdc++.h>
#define int long long
using namespace std;
int a,b,c,sum,mn,mx,pr;
double av;
signed main(){
	cin>>a>>b>>c;
	sum=a+b+c;
	av=(double)sum/3.0;
	pr=a*b*c;
	mn=min(a,min(b,c));
	mx=max(a,max(b,c));
	cout<<"Sum is "<<sum<<"\n";
	cout<<fixed<<setprecision(1)<<"Average is "<<av<<"\n";
	cout<<"Product is "<<pr<<"\n";
	cout<<"Smallest is "<<mn<<"\n";
	cout<<"Largest is "<<mx<<"\n";
	return 0;
}
