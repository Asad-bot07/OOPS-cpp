#include<iostream>
using namespace std;
int main()
{
    int n,c,i;
    cout<<"Enter number :"<<endl;
    cin>>n;
    if(n==1)
    {
        cout<<"Not Prime"<<endl;
    }
    else
    {
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            c++;
            break;
        }
    }
    if(c)
    {
        cout<<"Not Prime"<<endl;
    }
    else
    {
        cout<<"Prime"<<endl;
    }
    }
}