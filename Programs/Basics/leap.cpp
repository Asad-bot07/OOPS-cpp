#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter year :"<<endl;
    cin>>year;
    if(year%4==0 && year/100!=0)
    cout<<"Leap year";
    else
    cout<<"Not a leap year";
}