#include<iostream>
using namespace std;
int pal(int num)
{
    int n=num,sum=0,r;
    while(num>0)
    {
        r=num%10;
        sum=sum*10+r;
        num/=10;
    }
    if(n==sum)
    return 1;
    else
    return 0;
}
int main()
{
    int n,result;
    cout<<"Enter number :\n";
    cin>>n;
    result=pal(n);
    if(result)
    cout<<"Palindrome";
    else
    cout<<"Not Palindrome";
    return 0;
}