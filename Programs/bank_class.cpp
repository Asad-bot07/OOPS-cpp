#include<iostream>
using namespace std;
class RBI
{
    public:
    virtual float getroi(){};
};
class bank1:public RBI
{
    public:
    float getroi()
    {
        cout<<"This bank 1"<<endl;
        return .07;
    }
};
class bank2:public RBI
{
    public:
    float getroi()
    {
        cout<<"This bank 2"<<endl;
        return .1;
    }
};
class bank3:public RBI
{
    public:
    float getroi()
    {
        cout<<"This bank 3"<<endl;
        return .15;
    }
};
int main()
{
    RBI *ptr;
    bank3 ob;
    float var;
    var=ob.getroi();
    cout<<var<<endl;
    bank2 ob1;bank1 ob2;
    ptr=&ob1;
    var=ptr->getroi();
    cout<<var<<endl;
    ptr=&ob2;
    var=ptr->getroi();
    cout<<var<<endl;
}