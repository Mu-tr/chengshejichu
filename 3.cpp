#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int nn=b/2-a;
    int mm=a-nn;
    if(nn>=0&&mm>=0&&b%2==0)
    {cout<<"chickens = "<<mm<<";"<<"rabbits = "<<nn;}
    else
    {cout<<"No solution!";}
    return 0;
}