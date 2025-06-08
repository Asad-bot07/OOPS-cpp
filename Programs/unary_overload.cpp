#include<iostream>
using namespace std;
class over
{
    int n;
    public:
    over(int n=0)
    {
        this->n=n;
    }
    void display()
    {
        cout<<"n= "<<n<<endl;
    }
    friend over operator-(over &obj)
    {
        int x=-obj.n;
        over ob(x);
        return ob;
    }   
};
int main()
{
    over ob1(5);
    ob1.display();
    ob1=-ob1;
    ob1.display();
}