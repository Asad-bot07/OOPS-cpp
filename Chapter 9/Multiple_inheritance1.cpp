#include <iostream>
using namespace std;
class A {
public:
    void display() {
        cout << "Class A display\n";
    }
};
class B {
public:
    void display() {
        cout << "Class B display\n";
    }
};
class C : public A, public B {
public:
    void showBoth() {
        A::display();
        B::display();
    }
};
int main() {
    C obj;
    obj.showBoth();
    return 0;
}
/*
Output:
Class A display
Class B display
*/
