#include <iostream>
using namespace std;
class Animal {
public:
    void eat() {
        cout << "Animals eat food\n";
    }
};
class Mammal : public Animal {
public:
    void walk() {
        cout << "Mammals walk\n";
    }
};
class Dog : public Mammal {
public:
    void bark() {
        cout << "Dog barks\n";
    }
};
int main() {
    Dog d;
    d.eat();
    d.walk();
    d.bark();
    return 0;
}
/*
Output:
Animals eat food
Mammals walk
Dog barks
*/
