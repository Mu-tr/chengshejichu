#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,Q,t1,t2,t3,t4,dis[1005][1005][4],dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
char a[1005][1005];
struct ok{
    int x,y,op;
};
queue<ok> q;
inline int check(int a,int b,int c,int d){
    for(int i=0;i<4;i++){
        int tx=a+dx[i],ty=b+dy[i];
        if(tx==c&&ty==d) return i;
    }
}
signed main(){
    cin>>n>>Q;
    cin>>t1>>t2>>t3>>t4;
    for(int i=1;i<=n;i++) scanf("%s",a[i]+1);
    memset(dis,0x3f,sizeof(dis));
    dis[t1][t2][check(t1,t2,t3,t4)]=0;
    q.push((ok){t1,t2,check(t1,t2,t3,t4)});
    while(!q.empty()){
        ok t=q.front();q.pop();
        for(int i=0;i<4;i++){
            if(i==t.op) continue;
            int tx=t.x+dx[i],ty=t.y+dy[i];
            if(tx<=0||tx>n||ty<=0||ty>n||a[tx][ty]=='#') continue;
            if(dis[tx][ty][i^1]>(dis[t.x][t.y][t.op]+1)){
                dis[tx][ty][i^1]=dis[t.x][t.y][t.op]+1;
                q.push((ok){tx,ty,i^1});
            }
        }
    }
    for(int i=1;i<=Q;i++){
        cin>>t1>>t2>>t3>>t4;
        int o=check(t1,t2,t3,t4);
        if(dis[t1][t2][o]>1e9) puts("-1");
        else cout<<dis[t1][t2][o]<<"\n";
    }
    return 0;
}