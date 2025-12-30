#include<bits/stdc++.h>
#define int long long
using namespace std;
class Fraction
{
    friend Fraction operator+(const Fraction& frac1, const Fraction& frac2); //重载+运算符
    friend Fraction operator-(const Fraction& frac1, const Fraction& frac2); //重载-运算符
    friend Fraction operator*(const Fraction& frac1, const Fraction& frac2); //重载*运算符
    friend Fraction operator/(const Fraction& frac1, const Fraction& frac2); //重载/运算符
    friend bool operator==(Fraction frac1, Fraction frac2);                  //重载==运算符
    friend bool operator>(const Fraction& frac1, const Fraction& frac2);     //重载>运算符
    friend bool operator<(const Fraction& frac1, const Fraction& frac2);     //重载<运算符
    friend ostream& operator<<(ostream& out, const Fraction& frac);          //重载<<运算符
    friend istream& operator>>(istream& in, Fraction& frac);                 //重载>>运算符
    friend void sortFraction();//对分数数组排序
public:
    Fraction();                      //无参造函数
    Fraction(int n, int d);          //带参造函数
    Fraction(const Fraction& f);     //复制造函数
    void setFraction(int n, int d);  //设置分数的分子和分母
    int getNumer();                  //获取分数的分子
    int getDeno();                   //获取分数的分母
    void RdcFrc();                   //当前分数约分
private:
    int numer; //分子
    int deno;  //分母    
};
void menu();
void menu1();
void menu2();
void cls(){//清屏
    system("cls");
}
void pause(){//等待
    system("pause");
}
int gcd(int x,int y){//最大公约数
    if(x<0) x=-x;
    if(y<0) y=-y;
    if(!y) return x;
    return gcd(y,x%y);
}
int lcm(int x,int y){//最小公倍数
    int d=gcd(x,y);
    return (x/d)*(y/d)*d;
}
Fraction::Fraction():numer(0),deno(1){

}
Fraction::Fraction(int n, int d):numer(n),deno(d){

}
Fraction::Fraction(const Fraction& f):numer(f.numer),deno(f.deno){

}
void Fraction::setFraction(int n, int d){
    numer=n;deno=d;
}
int Fraction::getNumer(){
    return numer;
}
int Fraction::getDeno(){
    return deno;
}
void Fraction::RdcFrc(){
    int d=gcd(numer,deno);
    numer/=d;deno/=d;
}
Fraction operator+(const Fraction& frac1, const Fraction& frac2){
    int d=lcm(frac1.deno,frac2.deno);
    int d1=d/frac1.deno,d2=d/frac2.deno;
    int s1=frac1.numer*d1,s2=frac2.numer*d2;
    s1+=s2;
    Fraction a(s1,d);
    a.RdcFrc();
    return a;
}
Fraction operator-(const Fraction& frac1, const Fraction& frac2){
    int d=lcm(frac1.deno,frac2.deno);
    int d1=d/frac1.deno,d2=d/frac2.deno;
    int s1=frac1.numer*d1,s2=frac2.numer*d2;
    s1-=s2;
    Fraction a(s1,d);
    a.RdcFrc();
    return a;
}
Fraction operator*(const Fraction& frac1, const Fraction& frac2){
    Fraction a(frac1.numer*frac2.numer,frac1.deno*frac2.deno);
    a.RdcFrc();
    return a;
}
Fraction operator/(const Fraction& frac1, const Fraction& frac2){
    Fraction a(frac1.numer*frac2.deno,frac1.deno*frac2.numer);
    a.RdcFrc();
    return a;
}
bool operator==(Fraction frac1, Fraction frac2){
    if(frac1.numer==frac2.numer&&frac1.deno==frac2.deno) return 1;
    return 0;
}
bool operator>(const Fraction& frac1, const Fraction& frac2){
    int d=lcm(frac1.deno,frac2.deno);
    int d1=d/frac1.deno,d2=d/frac2.deno;
    int s1=frac1.numer*d1,s2=frac2.numer*d2;
    return s1>s2;
}
bool operator<(const Fraction& frac1, const Fraction& frac2){
    int d=lcm(frac1.deno,frac2.deno);
    int d1=d/frac1.deno,d2=d/frac2.deno;
    int s1=frac1.numer*d1,s2=frac2.numer*d2;
    return s1<s2;
}
ostream& operator<<(ostream& out, const Fraction& frac){
    cout<<frac.numer<<"/"<<frac.deno;
    return out;
}
istream& operator>>(istream& in, Fraction& frac){
    int a,b;char ch;
    cin>>a>>ch>>b;
    frac.numer=a;frac.deno=b;
    return in;
}
int check(int l,int r,const string &s){//字符串转数字及判断数字串是否合法
    int t=0;
    for(int i=l;i<=r;i++){
        if(s[i]<'0'||s[i]>'9') return -1;
        t*=10;
        t+=(s[i]-'0');
    }
    return t;
}
bool js(int l,int mid,int r,const string &s,vector<Fraction> &e){//提取分数及判断合法
    int d1=check(l,mid-1,s),d2=check(mid+1,r,s);
    if(d1==-1||d2==-1||d2==0) return 1;
    e.push_back(Fraction(d1,d2));
    return 0;
}
void sortFraction(){
    bool f=0;string s;
    vector<Fraction> e;
    getline(cin,s);
    if(s=="#") return;
    int l=0,mid,r;
    for(int i=0;i<(int)s.size();i++){
        if(s[i]==','||s[i]=='<'||s[i]=='>'){
            r=i-1;
            if(js(l,mid,r,s,e)) f=1;
            l=i+1;
        }
        if(s[i]=='/') mid=i;
    }
    char ch=s[(int)s.size()-1];
    if(ch!='<'&&ch!='>') f=1;
    if(f){
        cls();
        puts("输入不合法，请重新输入");
        pause();
        menu2();
    }
    else{
        sort(e.begin(),e.end());
        if(ch=='<'){
            for(int i=0;i<(int)e.size();i++){
                cout<<e[i];
                if(i<((int)e.size()-1)) cout<<",";
                else cout<<"\n";
            }
        }
        else{
            for(int i=e.size()-1;i>=0;i--){
                cout<<e[i];
                if(i>0) cout<<",";
                else cout<<"\n";
            }
        }
        pause();
    }
}
void menu1(){//分数计算菜单
    cls();
    puts("请输入分数计算式（如1/2+1/3回车），输入#号键返回上一层目录：");
    bool f=0;string s;vector<Fraction> e;vector<char> E;
    getline(cin,s);
    if(s=="#") return;
    int l=0,mid=-1,r;
    for(int i=0;i<(int)s.size();i++){
        if(s[i]=='+'||s[i]=='-'||s[i]=='*'){
            r=i-1;E.push_back(s[i]);
            if(js(l,mid,r,s,e)) f=1;
            l=i+1;mid=-1;
        }
        if(s[i]=='/'){
            if(mid==-1) mid=i;
            else{
                r=i-1;E.push_back(s[i]);
                if(js(l,mid,r,s,e)) f=1;
                l=i+1;mid=-1;
            }
        }
    }
    if(mid==-1) f=1;
    else{
        r=s.size()-1;
        if(js(l,mid,r,s,e)) f=1;
    }
    if(f){
        cls();
        puts("输入不合法，请重新输入");
        pause();
        menu1();
    }
    else{
        cout<<"=";
        Fraction sum=e[0];
        int t=0;
        while(t<(int)E.size()&&(E[t]=='*'||E[t]=='/')){
            if(E[t]=='*') sum=sum*e[t+1];
            else sum=sum/e[t+1];
            t++;
        }
        for(int i=t;i<(int)E.size();i++){
            Fraction a=e[i+1];
            int d=i+1;
            while(d<(int)E.size()&&(E[d]=='*'||E[d]=='/')){
                if(E[d]=='*') a=a*e[d+1];
                else a=a/e[d+1];
                d++;
            }
            if(E[i]=='+') sum=sum+a;
            if(E[i]=='-') sum=sum-a;
            i=d-1;
        }
        cout<<sum<<"\n";
        pause();
    }
}
void menu2(){//分数排序菜单
    cls();
    puts("请输入一组分数，用逗号隔开，如需由小到大排序用符号<结尾，由大到小排序用符号>结尾（如1/2,1/4,3/5<回车），输入#号键返回上一层目录：");
    sortFraction();
}
void menu(){//主菜单
    cls();
    puts("请选择功能：");
    puts("1.分数计算");
    puts("2.分数排序");
    puts("3.退出");
    string s;
    getline(cin,s);
    if(s=="1"){
        menu1();
        menu();
    }
    else if(s=="2"){
        menu2();
        menu();
    }
    else if(s=="3") return;
    else{
        cls();
        puts("输入不合法，请重新输入");
        pause();
        menu();
    }
}
signed main(){
    system("chcp 65001");cls();
    menu();
    return 0;
}