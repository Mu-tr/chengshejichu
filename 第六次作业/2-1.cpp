#include<bits/stdc++.h>
using namespace std;
int n,cnt,tnt;
string a[1005];
int main(){
    a[0]="a";
    cin>>n;
    for(int i=1;i<=n;i++){
        cnt=0;
        while(a[cnt].back()!='.'){
            cin>>a[++cnt];
            if(a[cnt].back()==',') tnt=cnt;
        }
        int sz=a[cnt].size()-2,SZ=a[tnt].size()-2;
        bool f1=0,f2=0;
        if(a[cnt][sz-2]=='o'&&a[cnt][sz-1]=='n'&&a[cnt][sz]=='g') f1=1;
        if(a[tnt][SZ-2]=='o'&&a[tnt][SZ-1]=='n'&&a[tnt][SZ]=='g') f2=1;
        if(f1&&f2){
            a[cnt-2]="qiao",a[cnt-1]="ben",a[cnt]="zhong.";
            for(int j=1;j<=cnt;j++){
                cout<<a[j];
                if(j<cnt) cout<<" ";
            }
            cout<<"\n";
        }
        else puts("Skipped");
    }
    return 0;
}