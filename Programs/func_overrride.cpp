#include<iostream>
using namespace std;
class A
{
    public:
    void show()
    {
        cout<<"Im from A\n";
    }
};
class B:public A
{
    public:
    void show()
    {
        A::show();
        cout<<"Im from B\n";
    }
};
int main()
{
    B ob;
    ob.A::show();
    ob.show();
}