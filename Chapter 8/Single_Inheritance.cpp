#include <iostream>
using namespace std;
// Base class
class Animal {
public:
    void sound() {
        cout << "Animals make sounds\n";
    }
};
// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks\n";
    }
};

int main() {
    Dog d;
    d.sound();  // Calling base class function
    d.bark();   // Calling derived class function
    return 0;
}

/*
Output:
Animals make sounds
Dog barks
*/
