#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
    int t;
    cout<<"Address of x="<<&x<<endl;
    t=x;
    x=y;
    y=t;

}
void swap2(int m,int n)
{
    int t=m;
    cout<<"Address of m="<<&m<<endl;
    m=n;
    n=t;
}
int main()
{
    int a,b;
    cout<<"Enter numbers :\n";
    cin>>a>>b;
    cout<<"Address of a="<<&a<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    swap2(a,b);
    return 0;
}