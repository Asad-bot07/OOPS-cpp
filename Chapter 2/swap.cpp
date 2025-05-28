#include<iostream>
using namespace std;
int main()
{
    int a,b,t;
    cout<<"Enter numbers :"<<endl;
    cin>>a;
    cin>>b;
    cout<<"Before swapping :"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    t=a;
    a=b;
    b=t;
    cout<<"After swapping :"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}