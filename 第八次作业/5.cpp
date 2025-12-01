double mx=-1.0;
class Student{
    public:
    string num,name;
    Student(string x,string y):num(x),name(y){

    }
    virtual void display()=0;
};
class GroupA:public Student{
    public:
    int s1,s2;
    GroupA(string a,string b,int c,int d):Student(a,b),s1(c),s2(d){
        mx=max(mx,((double)c+(double)d)/2.0);
    }
    void display(){
        double d=((double)s1+(double)s2)/2.0;
        if(d>=mx) cout<<num<<" "<<name<<"\n";
    }
};
class GroupB:public Student{
    public:
    int s1,s2;
    char gs;
    GroupB(string a,string b,int c,int d,char e):Student(a,b),s1(c),s2(d),gs(e){
        mx=max(mx,((double)c+(double)d)/2.0);
    }
    void display(){
        double d=((double)s1+(double)s2)/2.0;
        if(d>=mx) cout<<num<<" "<<name<<"\n";
        else if(gs=='A'&&d>=(mx*0.7)) cout<<num<<" "<<name<<"\n";
    }
};
class GroupC:public Student{
    public:
    int s1,s2,s3,s4,s5;
    GroupC(string a,string b,int c,int d,int e,int f,int g):Student(a,b),s1(c),s2(d),s3(e),s4(f),s5(g){

    }
    void display(){
        double d=((double)s1+(double)s2+s3+s4+s5)/5.0;
        if(d>=(mx*0.9)) cout<<num<<" "<<name<<"\n";
    }
};