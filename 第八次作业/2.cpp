class Animal{
    private:
    int m_nWeightBase;
    protected:
    int m_nAgeBase;
    public:
    void set_weight(int x){
        m_nWeightBase=x;
    }
    int get_weight(){
        return m_nWeightBase;
    }
    void set_age(int x){
        m_nAgeBase=x;
    }
};
class Cat:private Animal{
    private:
    string m_strName;
    public:
    Cat(string x):m_strName(x){
        
    }
    void set_print_age(){
        set_age(5);
        cout<<m_strName<<", age = "<<m_nAgeBase<<"\n";
    }
    void set_print_weight(){
        set_weight(6);
        cout<<m_strName<<", weight = "<<get_weight()<<"\n";
    }
};