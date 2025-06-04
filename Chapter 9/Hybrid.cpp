#include <iostream>
using namespace std;
class A {
public:
    void showA() {
        cout << "Class A\n";
    }
};
class B : public A {
public:
    void showB() {
        cout << "Class B\n";
    }
};

class C : public A {
public:
    void showC() {
        cout << "Class C\n";
    }
};
class D : public B, public C {
public:
    void showD() {
        cout << "Class D\n";
    }
};
int main() {
    D obj;
    obj.B::showA(); // Resolve ambiguity
    obj.showB();
    obj.showC();
    obj.showD();
    return 0;
}
/*
Output:
Class A
Class B
Class C
Class D
*/
