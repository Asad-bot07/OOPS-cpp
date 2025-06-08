#include<iostream>
#include<stdio.h>
using namespace std;
class student{
    string name;
    int roll;
    int sub,sub1,sub2,total;
    float per;
    public:
    void accept()
    {
        cout<<"Enter name :"<<endl;
        cin>>name;
        fflush(stdin);
        cout<<"Enter roll :"<<endl;
        cin>>roll;
        cout<<"Enter subject marks :"<<endl;
        cin>>sub>>sub1>>sub2;
    }
    void calculate()
    {
        int sum;
        sum=sub+sub1+sub2;
        per=sum/3;
    }
    void display()
    {
        cout<<"Name :"<<" "<<name<<endl;
        cout<<"Roll :"<<" "<<roll<<endl;
        cout<<"Percentage :"<<" "<<per<<endl;
    }
};
int main()
{  
    student ob;
    ob.accept();
    ob.calculate();
    ob.display();   
}