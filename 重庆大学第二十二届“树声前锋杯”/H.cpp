#include<bits/stdc++.h>
using namespace std;
int sa[1000005],x[1000005],y[1000005],c[1000005],z[10000005],rk[100005],ans[100005];
string s;
int n,m=200;
void Sort(){
    for(int i=1;i<=m;i++)c[i]=0;
    for(int i=1;i<=n;i++)c[x[i]]++;
    for(int i=1;i<=m;i++)c[i]+=c[i-1];
    for(int i=n;i>=1;i--)sa[c[x[y[i]]]--]=y[i];
}
void Get_SA(){
    for(int i=0;i<n;i++)y[i+1]=i+1;
    Sort();
    for(int len=1;len<=n;len*=2){
        int p=0;
        for(int i=n-len+1;i<=n;i++)y[++p]=i;
        for(int i=1;i<=n;i++){
            if(sa[i]>len)y[++p]=sa[i]-len;
        }
        Sort();
        for(int i=1;i<=n;i++)z[i]=x[i];
        x[sa[1]]=p=1;
        for(int i=2;i<=n;i++){
            if(z[sa[i]]==z[sa[i-1]]&&z[sa[i]+len]==z[sa[i-1]+len])x[sa[i]]=p;
            else x[sa[i]]=++p;
        }
        m=p;
    }
}
unsigned long long f[100005],p[100005];
bool pd(int l,int r,int L,int R){
    return f[R]-f[L-1]*p[R-L+1]==f[r]-f[l-1]*p[r-l+1];
}
int Sum(int x,int y){
    if(x==114514||y==114514)return 0; 
    int l=0,r=min(n-x+1,n-y+1);
    while(l<r){
        int mid=l+r+1>>1;
        if(pd(x,x+mid-1,y,y+mid-1))l=mid;
        else r=mid-1;
    }return l;
}
struct st{
    int l,r,v;
    int val,key;
    int size,min1;
}t[1000005];
int cnt,root;
void update(int x){
    t[x].size=t[t[x].l].size+t[t[x].r].size+1;
    t[x].min1=min(t[x].v,min(t[t[x].l].min1,t[t[x].r].min1));
}
int newnodes(int x,int y){
    t[++cnt].val=x;
    t[cnt].min1=y;
    t[cnt].v=y;
    t[cnt].key=rand();
    t[cnt].size=1;
    return cnt;
}
void split(int now,int val,int &x,int &y){
    if(!now){
        x=y=0;
        return;
    }
    if(t[now].val<=val){x=now;
        split(t[now].r,val,t[now].r,y);
    }else{y=now;
        split(t[now].l,val,x,t[now].l);
    }update(now);
}
int merge(int x,int y){
    if(!x||!y)return x+y;
    if(t[x].key<t[y].key){
        t[x].r=merge(t[x].r,y);
        update(x);
        return x;
    }else{
        t[y].l=merge(x,t[y].l);
        update(y);
        return y;
    }
}
int Get_R(int x){
    while(t[x].r){
        x=t[x].r;
    }
    return t[x].v;
}
int Get_L(int x){
    while(t[x].l){
        x=t[x].l;
    }
    return t[x].v;
}
int main(){
    t[0].min1=114514;
    scanf("%d",&n);p[0]=1;
    for(int i=1;i<=n;i++)scanf("%d",&x[n-i+1]);
    for(int i=1;i<=n;i++){
        p[i]=p[i-1]*131;
        f[i]=f[i-1]*131+x[i];
    }Get_SA();
    for(int i=1;i<=n;i++)rk[sa[i]]=i;
//    for(int i=1;i<=n;i++)cerr<<rk[i]<<' ';cerr<<endl;
    for(int i=n,u,v,w;i>=1;i--){
        split(root,rk[i],u,v);
        int y=Get_R(u),z=Get_L(v);
        root=merge(u,merge(newnodes(rk[i],i),v));
        if(i==n)continue;
        if(y==114514&&z==114514)ans[n-i+1]=n-i;
        else{
            int x=max(Sum(i,y),Sum(i,z));
//            cerr<<"---- "<<x<<' '<<y<<' '<<z<<' '<<i<<endl; 
            int l=1,r=rk[i];
            while(l<r){
                int mid=l+r>>1;
                if(Sum(sa[mid],i)>=x)r=mid;
                else l=mid+1;
            }
            split(root,rk[i]-1,v,w);
            split(v,l-1,u,v);
//            cerr<<l<<' '<<r<<" "<<rk[i]<<' '<<t[v].size<<endl; 
            ans[n-i+1]=max(ans[n-i+1],n-t[v].min1+1);
            root=merge(u,merge(v,w));
            l=rk[i],r=n;
            while(l<r){
                int mid=l+r+1>>1;
                if(Sum(sa[mid],i)>=x)l=mid;
                else r=mid-1;
            }
            split(root,r,v,w);
            split(v,rk[i],u,v);
//            cerr<<l<<' '<<r<<" "<<rk[i]<<' '<<t[v].size<<endl; 
            ans[n-i+1]=max(ans[n-i+1],n-t[v].min1+1);
            root=merge(u,merge(v,w));
        }
    }root=0;
    for(int i=2;i<=n;i++)printf("%d ",ans[i]);
    return 0;
}