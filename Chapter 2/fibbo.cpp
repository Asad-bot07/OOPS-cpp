#include<iostream>
using namespace std;
int main()
{
    int i,t=0,t1=1,sum;
    cout<<t<<" "<< t1<<" ";
    for(i=2;i<=10;i++)
    {
        sum=t+t1;
        cout<<sum<<" ";
        t=t1;
        t1=sum;
    }
}