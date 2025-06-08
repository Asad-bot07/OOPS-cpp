#include<iostream>
#include<cmath>
using namespace std;
class overload
{
    int r,a,x,y;
    public:
    overload(int r=0,int a=0)
    {
        this->r=r;
        this->a=a;
    }
    overload operator+(overload &ob){
        overload temp;
        double x1=r*cos(a);
        double y1=r*sin(a);
        double x2=ob.r*cos(ob.a);
        double y2=ob.r*sin(ob.a);
        
        double x=x1+x2;
        double y=y1+y2;

        temp.r=sqrt(x*x+y*y);
        temp.a=atan2(y,x);

        return temp;
    }
    void show(){
        cout<<"radius="<<r<<endl;
        cout<<"angle="<<a<<endl;
    }

};
int main()
{
    overload ob1(5,M_PI/4),ob2(8,M_PI/6),ob3;
    
    cout<<"1st polar:"<<endl;
    ob1.show();
    
    cout<<"2nd polar:"<<endl;
    ob2.show();
    
    ob3=ob1+ob2;
    
    cout<<"resultant value:";
    ob3.show();
}