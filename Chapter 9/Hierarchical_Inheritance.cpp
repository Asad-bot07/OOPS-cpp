#include <iostream>
using namespace std;
class Animal {
public:
    void breathe() {
        cout << "Animal breathes\n";
    }
};
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks\n";
    }
};
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat meows\n";
    }
};
int main() {
    Dog d;
    Cat c;
    d.breathe();
    d.bark();
    c.breathe();
    c.meow();
    return 0;
}
/*
Output:
Animal breathes
Dog barks
Animal breathes
Cat meows
*/
