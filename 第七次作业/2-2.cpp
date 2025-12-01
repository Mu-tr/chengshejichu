#include<bits/stdc++.h>
using namespace std;
int n,k,t1,t2;
class country{
    public:
    int z,cnt,id;
    bool operator < (const country &A) const{
        if(z==A.z) return cnt>A.cnt;
        return z>A.z;
    }
}a[10005];
ostream &operator << (ostream &cout,country &A){
    cout<<A.id<<" "<<A.z<<"\n";
    return cout;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++) a[i].z=a[i].cnt=0,a[i].id=i;
    for(int i=1;i<=n;i++){
        cin>>k;
        for(int j=1;j<=k;j++){
            cin>>t1>>t2;
            a[t1].cnt++;a[i].cnt++;
            a[t1].z-=t2;a[i].z+=t2;
        }
    }
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++) cout<<a[i];
    return 0;
}