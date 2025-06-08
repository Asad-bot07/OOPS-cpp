#include<iostream>
using namespace std;
class load
{
    public:
    void add(int a,int b)
    {
        int sum=a+b;
        cout<<"Answer : "<<sum<<endl;
    }
    float add(double a,double b)
    {
        return a+b;
    }
    void add(int a,double b)
    {
        int sum=a+b;
        cout<<"Answer : "<<sum<<endl;
    }
};
int main()
{
    load ob;
    ob.add(1,2);
    cout<<"Answer : "<<ob.add(1.25,3.753)<<endl;
    ob.add(3,6.523);
}