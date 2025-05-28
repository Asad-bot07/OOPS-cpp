#include<iostream>
using namespace std;
inline int check(int a,int b,int c)
{
    return (a>b)?(a>c?:c):(b>c?b:c);
}
int main()
{
    int s,q,l,result;
    cout<<"Enter numbers "<<endl;
    cin>>s;
    cin>>q;
    cin>>l;
    result=check(s,q,l);
    cout<<result<<" is greatest!"<<endl;
}