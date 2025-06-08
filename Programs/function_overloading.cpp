#include<iostream>
using namespace std;
float area(float r)
{
    float ans;
    ans=3.14*r*r;
    return ans;
}
int area(int side)
{
    int ans;
    ans=4*side;
    return ans;
}
int main()
{
    int n,a;float f,ans;
    cout<<"Enter side of square :\n";
    cin>>n;
    a=area(n);
    cout<<"Area of square:"<<a<<endl;
    cout<<"Enter radius of circle:\n";
    cin>>f;
    ans=area(f);
    cout<<"Area of circle:"<<ans;
}