Vec2::Vec2(double u,double v){
    this->u=u;
    this->v=v;
}
Vec2 Vec2::operator+(const Vec2&b){
    Vec2 a;
    a.u=u+b.u;
    a.v=v+b.v;
    return a;
}
bool operator!=(const Vec2&a,const Vec2&b)
{
    if(a.u!=b.u||a.v!=b.v) return 1;
    return 0;
}
ostream&operator<<(ostream&os,const Vec2&c){
   os<<"u="<<c.u<<",v="<<c.v;
   return os;
}
istream&operator>>(istream&is,Vec2&c){
   is>>c.u>>c.v;
   return is;
}