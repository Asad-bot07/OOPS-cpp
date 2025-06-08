#include<iostream>
using namespace std;
class meaningless
{   
    int n;
    public:
    meaningless(int n=0)
    {
        this->n=n;
    }
    meaningless operator>(meaningless &obj)
    {
        meaningless ab;
        ab.n=n+obj.n;
        return ab;
    }
    void display()
    {
        cout<<n<<endl;
    }
};
int main()
{
    meaningless ob(5),ob1(8);
    meaningless obj1=ob>ob1;
    obj1.display();
}