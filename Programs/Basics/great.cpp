#include<iostream>
using namespace std;
int grea(int v,int m,int n)
{
    if(v>m && v>n)
    return v;
    else if(m>v && m>n)
    return m;
    else if(n>v && n>m)
    return n;
    else
    return 0;
}
inline int check(int a,int b,int c)
{
    return grea(a,b,c);
}
int main()
{
    int s,q,l,result;
    cout<<"Enter numbers "<<endl;
    cin>>s;
    cin>>q;
    cin>>l;
    result=check(s,q,l);
    if(result==0)
    cout<<"All are equal!!";
    else
    cout<<result<<" is greatest!"<<endl;
}