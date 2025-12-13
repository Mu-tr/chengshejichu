#include<bits/stdc++.h>
#define int long long
using namespace std;
int T,n,c[1000005],cnt,t1,head[1000005],nxt[2000005],txt[2000005],ans,sum[1000005];
inline int js(int x){
    return x*(x-1)/2;
}
inline void dfs(int k,int f){
    ans+=js(sum[c[k]]);
    sum[c[k]]++;
    for(int i=head[k];i;i=nxt[i]){
        if(txt[i]==f) continue;
        dfs(txt[i],k);
    }
    sum[c[k]]--;
}
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0);
    cin>>T;
    while(T--){
        cin>>n;
        for(int i=1;i<=n;i++) cin>>c[i];
        for(int i=2;i<=n;i++){
            cin>>t1;
            nxt[++cnt]=head[i],head[i]=cnt,txt[cnt]=t1;
            nxt[++cnt]=head[t1],head[t1]=cnt,txt[cnt]=i;
        }
        ans=0;
        dfs(1,0);
        cout<<ans<<"\n";
        for(int i=1;i<=n;i++) head[i]=sum[i]=0;
        for(int i=1;i<=cnt;i++) nxt[i]=txt[i]=0;
        cnt=0;
    }
    return 0;
}