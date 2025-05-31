#include <iostream>
using namespace std;
class Vehicle {
public:
    void fuel() {
        cout << "Fueling vehicle" << endl;
    }
};
class Car : public Vehicle {
public:
    void drive() {
        cout << "Driving car" << endl;
    }
};
int main() {
    Car c;
    c.fuel(); // inherited
    c.drive(); // own method
}
