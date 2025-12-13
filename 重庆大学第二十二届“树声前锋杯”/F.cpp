#include<bits/stdc++.h>
#define int long long
#define M 998244353
using namespace std;
int n,m,Q,t1,t2,t3,t4,cnt,inv[200005],head[200005],nxt[200005],txt[200005],zhi[200005],type[200005],sum[200005],f[200005],g[200005],tot[200005];
queue<int> q;
inline int ksm(int k,int c){
    int a=1,b=k;
    while(c){
        if(c&1) a=(a*b)%M;
        b=(b*b)%M;
        c>>=1;
    }
    return a;
}
signed main(){
    for(int i=1;i<=200000;i++) inv[i]=ksm(i,M-2);
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>t1>>t2>>t3>>t4;
        nxt[++cnt]=head[t2],head[t2]=cnt,txt[cnt]=t1,zhi[cnt]=t3,type[cnt]=t4;
        sum[t1]++;tot[t1]++;
    }
    for(int i=1;i<=n;i++){
        if(sum[i]==0){
            f[i]=1;g[i]=0;
            q.push(i);
        }
    }
    while(!q.empty()){
        int t=q.front();q.pop();
        for(int i=head[t];i;i=nxt[i]){
            int v=txt[i];
            int o=inv[tot[v]];
            sum[v]--;
            if(sum[v]==0) q.push(v);
            if(type[i]==1){
                f[v]=(f[v]+(o*f[t]%M))%M;
                g[v]=(g[v]+(o*((f[t]*zhi[i]+g[t])%M)%M))%M;
            }
            else{
                f[v]=(f[v]+(o*(f[t]*zhi[i]%M)%M))%M;
                g[v]=(g[v]+(o*g[t]%M))%M;
            }
        }
    }
    int s1=0,s2=0;
    for(int i=1;i<=n;i++) s1=(s1+f[i])%M,s2=(s2+g[i])%M;
    s1=(s1*inv[n])%M;
    s2=(s2*inv[n])%M;
    cin>>Q;
    for(int i=1;i<=Q;i++){
        cin>>t1>>t2;
        int d1=(t1+t2)*inv[2]%M;
        int d2=(d1*s1+s2)%M;
        cout<<d2<<"\n";
    }
    return 0;
}