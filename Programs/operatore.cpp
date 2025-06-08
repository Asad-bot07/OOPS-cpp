#include<iostream>
using namespace std;
class overload
{
    private:
    int image,real;
    public:
    overload(int r=0,int i=0)
    {
        real=r;
        image=i;
    }
    overload operator+(overload &ob)
    {
        overload ab;
        ab.real=real+ob.real;
        ab.image=image+ob.image;
        return ab;
    }
    void display()
    {
        cout<<real<<" + i"<<image<<"\n";
    }
};
int main()
{
    overload obj(3,4),obj1(6,7);
    overload obj2=obj+obj1;
    obj2.display();
}