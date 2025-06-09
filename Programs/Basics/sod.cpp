#include<iostream>
using namespace std;
int sod(int n)
{
    int r,sum;
    while(n>0)
    {
        r=n%10;
        sum+=r;
        n/=10;
    }
    return sum;
}
int main()
{
    int num;
    cout<<"Enter number :\n"<<endl;
    cin>>num;
    cout<<"The sum of the digit is : "<<sod(num)<<endl;
    return 0;
}