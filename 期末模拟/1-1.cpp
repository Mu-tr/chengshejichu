Teacher::Teacher(string name,int age){
    this->name=name;
    this->age=age;
}
string Teacher::getName() const{
    return name;
}
int Teacher::getAge() const{
    return age;
}
void Teacher::setName(string name)
{
   this->name=name;
}
void Teacher::setAge(int age)
{
    this->age=age;
}