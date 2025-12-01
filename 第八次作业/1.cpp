class CRAFT{
    protected:
    double speed;
    public:
    CRAFT(double x):speed(x){
        cout<<"创建航行器(速度: "<<x<<")\n";
    }
    virtual ~CRAFT(){
        cout<<"销毁航行器(速度: "<<speed<<")\n";
    }
    virtual void Show(){
        cout<<"航行(速度: "<<speed<<")\n";
    }
};
class PLANE:virtual public CRAFT{
    protected:
    double width;
    public:
    PLANE(double x,double y):CRAFT(x),width(y){
        cout<<"创建飞机(翼展: "<<y<<")\n";
    }
    virtual ~PLANE(){
        cout<<"销毁飞机(翼展: "<<width<<")\n";
    }
    virtual void Show(){
        cout<<"航行(速度: "<<speed<<", 翼展: "<<width<<")\n";
    }
};
class SHIP:virtual public CRAFT{
    protected:
    double depth;
    public:
    SHIP(double x,double y):CRAFT(x),depth(y){
        cout<<"创建船(吃水: "<<y<<")\n";
    }
    virtual ~SHIP(){
        cout<<"销毁船(吃水: "<<depth<<")\n";
    }
    virtual void Show(){
        cout<<"航行(速度: "<<speed<<", 吃水: "<<depth<<")\n";
    }
};
class SEAPLANE:public PLANE,public SHIP{
    public:
    SEAPLANE(double x,double y,double z):CRAFT(x),PLANE(x,y),SHIP(x,z){
        cout<<"创建水上飞机\n"; 
    }
    virtual ~SEAPLANE(){
    	cout<<"销毁水上飞机\n";
	}
    virtual void Show(){
        cout<<"航行(速度: "<<speed<<", 翼展: "<<width<<", 吃水: "<<depth<<")\n";
    }
};