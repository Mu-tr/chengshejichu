#include<bits/stdc++.h>
#define int long long
using namespace std;
int T,a,b,inf=5e9;
signed main(){
    cin>>T;
    while(T--){
        cin>>a>>b;
        if(b==1||(a==2&&b==2)||(a==0&&b>0)){
            puts("YES");
            continue;
        }
        if(b<0||abs(a)==1){
            puts("NO");
            continue;
        }
        int d=a*b,w=1,t;
        for(int i=1;i<=b;i++){
            w*=a;
            if(abs(w)>inf){
                t=i;
                break;
            }
        }
        if(w==d&&t==b) puts("YES");
        else puts("NO");
    }
    return 0;
}