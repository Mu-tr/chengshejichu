#include<bits/stdc++.h>
class HugeInteger{
    public:
    int a[100005],cnt;
    HugeInteger(){
        memset(a,0,sizeof(a));
        cnt=1;
    }
    HugeInteger(int x){
        memset(a,0,sizeof(a));
        if(x){
            cnt=0;
            while(x){
                a[++cnt]=x%10;
                x/=10;
            }
        }
        else cnt=1;
    }
    HugeInteger(string x){
        memset(a,0,sizeof(a));
        cnt=x.size();
        for(int i=0;i<(int)x.size();i++) a[i+1]=x[x.size()-1-i]-'0';
    }
    HugeInteger operator + (HugeInteger A){
        HugeInteger B;
        B.cnt=max(cnt,A.cnt);
        for(int i=1;i<=B.cnt;i++){
            B.a[i]=B.a[i]+a[i]+A.a[i];
            while(B.a[i]>=10) B.a[i+1]++,B.a[i]-=10;
        }
        if(B.a[B.cnt+1]) B.cnt++;
        return B;
    }
    HugeInteger operator + (string A){
        HugeInteger B;
        B.cnt=max(cnt,(int)A.size());
        for(int i=1;i<=B.cnt;i++){
            if(i<=A.size()) B.a[i]=B.a[i]+a[i]+A[A.size()-i]-'0';
            else B.a[i]+=a[i];
            while(B.a[i]>=10) B.a[i+1]++,B.a[i]-=10;
        }
        if(B.a[B.cnt+1]) B.cnt++;
        return B;
    }
};
ostream &operator << (ostream &cout,const HugeInteger &A){
    for(int i=A.cnt;i>=1;i--) cout<<A.a[i];
    return cout;
}