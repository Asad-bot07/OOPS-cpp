#include<iostream>
using namespace std;
int fibbo(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return fibbo(n-1)+fibbo(n-2);
}
int main()
{
    int num,i;
    cout<<"Enter the number of series :\n";
    cin>>num;
    for(i=0;i<=num;i++)
    {
        cout<<fibbo(i)<<" ";
    }
    return 0;
}