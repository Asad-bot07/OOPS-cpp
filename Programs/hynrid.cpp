#include<iostream>
using namespace std;
class A
{
    public:
    int a=5;
    int var()
    {
        return a;
    }
    void display()
    {
        cout<<"Im from A with "<<var()<<endl;
    }
};
class B: virtual public A
{
    public:
    int b=4;
    int show()
    {
        return b;
    }
    void display()
    {
        cout<<"Im from B with "<<show()<<endl;
    }
};
class C: virtual public A
{
    public:
    int c=5;
    int give()
    {
        return c;
    }
    void display()
    {
        cout<<"Im from C with "<<give()<<endl;
    }
};
class D:public B, public C
{
    public:
    int d=7;
    int ans()
    {
        return B::a+b+c+d;
    }
    void display()
    {
        A::display();
        B::display();
        C::display();
        cout<<"Im from D with "<<d<<" and sum of all values "<<ans()<<endl;
    }
};
int main()
{
    D ob3;
   ob3.display();
}