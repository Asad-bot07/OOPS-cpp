#include <iostream>
using namespace std;
class Engine {
public:
    void showEngine() {
        cout << "Engine is running\n";
    }
};
class Wheels {
public:
    void showWheels() {
        cout << "Wheels are rolling\n";
    }
};
class Car : public Engine, public Wheels {
public:
    void drive() {
        cout << "Car is driving\n";
    }
};
int main() {
    Car c;
    c.showEngine();
    c.showWheels();
    c.drive();
    return 0;
}
/*
Output:
Engine is running
Wheels are rolling
Car is driving
*/
