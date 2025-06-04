#include <iostream>
using namespace std;
class A {
public:
    void display() {
        cout << "Display from A\n";
    }
};
class B : virtual public A {
public:
    void showB() {
        cout << "Show from B\n";
    }
};
class C : virtual public A {
public:
    void showC() {
        cout << "Show from C\n";
    }
};
class D : public B, public C {
public:
    void showD() {
        cout << "Show from D\n";
    }
};
int main() {
    D obj;
    obj.display(); // Only one A due to virtual
    obj.showB();
    obj.showC();
    obj.showD();
    return 0;
}
/*
Output:
Display from A
Show from B
Show from C
Show from D
*/
