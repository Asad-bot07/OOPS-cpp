#include <iostream>
using namespace std;
class Base {
public:
    virtual void show() {
        cout << "Base class show()" << endl;
    }
};
class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show()" << endl;
    }
};
int main() {
    Base* ptr;
    Derived d;
    ptr = &d;
    ptr->show(); // Calls Derived class version due to virtual function
    return 0;
}
/*
Derived class show()
*/
