#include <iostream>
using namespace std;
class EncapsulationExample {
private:
    // we declare a as private to hide it from outside
    int a; 
public:
    // set() function to set the value of  a
    void set(int x) 
    {
        a = x;
    }
    // get() function to return the value of a
    int get() 
    {
        return a;
    }
};
// main function
int main() 
{
    EncapsulationExample e1;

    e1.set(10);

    cout<<e1.get();
    return 0;
}
