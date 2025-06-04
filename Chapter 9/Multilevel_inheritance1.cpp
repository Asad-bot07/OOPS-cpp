#include <iostream>
using namespace std;
class Vehicle {
public:
    Vehicle() {
        cout << "This is a Vehicle\n";
    }
};
class Car : public Vehicle {
public:
    Car() {
        cout << "This is a Car\n";
    }
};
class SportsCar : public Car {
public:
    SportsCar() {
        cout << "This is a SportsCar\n";
    }
};
int main() {
    SportsCar sc;
    return 0;
}
/*
Output:
This is a Vehicle
This is a Car
This is a SportsCar
*/
