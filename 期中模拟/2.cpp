#include<bits/stdc++.h>
using namespace std;
double a,b,c,s;
int main(){
    cin>>a>>b>>c;
    if((a+b)>c&&(b+c)>a&&(a+c)>b){
        s=(a+b+c)/2.0;
        double C=a+b+c;
        double S=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<fixed<<setprecision(2)<<"area = "<<S<<"; perimeter = "<<C;
    }
    else{
        cout<<"These sides do not correspond to a valid triangle";
}
    return 0;
}