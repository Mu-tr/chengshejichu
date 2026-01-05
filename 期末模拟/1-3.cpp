class Fruit{
protected:
	int weight;
public:
	Fruit(int x):weight(x){
		cout<<"Fruit Constructor\n";
	}
	virtual ~Fruit(){
		cout<<"Fruit Destructor\n";
	}
	virtual void display(){
		cout<<"weight="<<weight<<"\n";
	}
};
class Banana:virtual public Fruit{
private:
	string origin;
public:
	Banana(string a,int b):origin(a),Fruit(b){
		cout<<"Banana Constructor\n";
	}
	virtual ~Banana(){
		cout<<"Banana Destructor\n";
	}
	virtual void display(){
		cout<<"origin="<<origin<<",";
		cout<<"weight="<<weight<<"\n";
	}
};