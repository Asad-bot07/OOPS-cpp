#include<iostream>
using namespace std;
class A
{
    
    public:
    int a;
    void get(int n)
    {
        a=n;
    }
};
class B:public A
{
    
    public:
    int b;
    void get(int n)
    {
        b=n;
    }
};
class C:public A
{
    
    public:
    int c;
    void get(int n)
    {
        c=n;
    }
};
class D:public B, public C
{
    
    public:
    int d;
    void get(int n)
    {
        d=n;
    }
};
int main()
{
    D ob;
    //ob.a=10;
    ob.B::a=10;
    ob.C::a=15;
    ob.b=20;
    ob.c=30;
    ob.d=40;
    cout<<"a from class B="<<ob.B::a<<endl;
    cout<<"a from class C="<<ob.C::a<<endl;
    cout<<"b="<<ob.b<<endl;
    cout<<"c="<<ob.c<<endl;
    cout<<"d="<<ob.d<<endl;

}