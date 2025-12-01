#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,cnt;
bool f;
char ch;
string s,a[2005];
bool v[2005],vis[2005];
inline bool check(char x){
    if(x>='0'&&x<='9') return 1;
    if(x>='A'&&x<='Z') return 1;
    if(x>='a'&&x<='z') return 1;
    return 0;
}
signed main(){
    scanf("%lld\n",&n);
    for(int i=1;i<=n;i++){
        getline(cin,s);
        cnt=0;f=0;
        int sz=s.size();
        for(int j=0;j<sz;j++){
            if(s[j]==' '||s[j]=='\n') f=0;
            else if(!check(s[j])){
                a[++cnt]=s[j],f=0;
                if(s[j+1]==' ') vis[cnt]=1;
            }
            else if(!f) a[++cnt]+=s[j],f=1;
            else a[cnt]+=s[j];
        }
        for(int j=1;j<=cnt;j++){
            for(int g=0;g<(int)a[j].size();g++){
                if(a[j][g]=='I') continue;
                if(a[j][g]>='A'&&a[j][g]<='Z'){
                    int d=a[j][g]-'A';
                    a[j][g]=d+'a';
                }
            }
        }
        for(int j=1;j<=cnt;j++){
            if(a[j]=="?") a[j]="!";
            if(a[j]=="I"||a[j]=="me") a[j]="you";
            if(a[j]=="can"&&a[j+1]=="you") a[j]="I",a[j+1]="can";
            if(a[j]=="could"&&a[j+1]=="you") a[j]="I",a[j+1]="could";
        }
        cout<<s<<"\n";
        cout<<"AI: ";
        for(int j=1;j<cnt;j++){
            if(a[j].size()==1&&check(a[j][0])==0&&vis[j]==0){
                // cout<<j<<"\n";
                cout<<a[j];
            }
            else{
                cout<<a[j];
                if(a[j+1].size()>1||check(a[j+1][0])) cout<<" ";
            }
            
        }
        cout<<a[cnt]<<"\n";
        for(int j=1;j<=cnt;j++)
        for(int j=1;j<=cnt;j++) a[j].clear(),v[j]=vis[j]=0;
    }
    return 0;
}
/*
6
Hello ?
 Good to chat   with you
can   you speak Chinese?
Really?
Could you show me 5
What Is this prime? I,don 't know
*/