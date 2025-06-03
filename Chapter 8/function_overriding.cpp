#include <iostream>
using namespace std;
class Base {
public:
    void show() {
        cout << "Base class show()" << endl;
    }
};
class Derived : public Base {
public:
    // Function overriding
    void show() {
        cout << "Derived class show()" << endl;
    }
};
int main() {
    Derived d;
    d.show(); // Calls Derived class version
    return 0;
}
/*
Derived class show()
*/
