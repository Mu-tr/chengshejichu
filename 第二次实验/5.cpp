#include<bits/stdc++.h>
using namespace std;
int n,t1,t3,t4,v[1005];
char t2;
signed main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		memset(v,-1,sizeof(v));
		int d1=0,d2=0;
		while(1){
			scanf("%d %c %d:%d",&t1,&t2,&t3,&t4);
            if(t1==0) break;
			if(t2=='S'){
				v[t1]=t3*60+t4;
			}
			else{
				if(v[t1]!=-1){
					d1++;d2+=(t3*60+t4-v[t1]);
					v[t1]=-1; 
				}
			}
		}
		if(d2==0){
			puts("0 0");
		} 
		else{
			double d3=(double)d2/(double)d1;
			cout<<d1<<" ";
			cout<<fixed<<setprecision(0)<<d3<<"\n";
		}
	}
	return 0;
}