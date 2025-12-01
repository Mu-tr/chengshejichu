Student::Student(int id,char *name){
    m_id=id;
    for(int i=0;i<10;i++) m_name[i]=*(name+i);
    cout<<"Hi!"<<id<<" "<<m_name<<"\n";
}
Student::~Student(){
    cout<<"Bye!"<<m_id<<" "<<m_name<<"\n";
}
void Student::print(){
    cout<<"Bye!"<<m_id<<" "<<m_name<<"\n";
}