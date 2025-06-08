#include<iostream>
using namespace std;
class B;
class A
{
    int a;
    public:
    void set(int n)
    {
        a=n;
    }
    friend void show(A &ob1,B &ob2);
    friend void swap(A &ob1,B &ob2);
};
class B
{
    int b;
    public:
    void set(int n)
    {
        b=n;
    }
    friend void show(A &ob1,B &ob2);
    friend void swap(A &ob1,B &ob2);
};
void swap(A &ob1,B &ob2)
{
    int t;
    t=ob1.a;
    ob1.a=ob2.b;
    ob2.b=t;
}
void show(A &ob1,B &ob2)
{
    cout<<"a = "<<ob1.a<<" b = "<<ob2.b<<endl;
}
int main()
{
    A ob1;B ob2;
    ob1.set(5);
    ob2.set(6);
    cout<<"Before swapping :\n";
    show(ob1,ob2);
    swap(ob1,ob2);
    cout<<"After swapping :\n";
    show(ob1,ob2);
}