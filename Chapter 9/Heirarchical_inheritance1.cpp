#include <iostream>
using namespace std;
class Shape {
public:
    Shape() {
        cout << "Shape created\n";
    }
    void draw() {
        cout << "Drawing shape\n";
    }
};
class Circle : public Shape {
public:
    Circle() {
        cout << "Circle created\n";
    }
};
class Square : public Shape {
public:
    Square() {
        cout << "Square created\n";
    }
};
int main() {
    Circle c;
    Square s;
    c.draw();
    s.draw();
    return 0;
}
/*
Output:
Shape created
Circle created
Shape created
Square created
Drawing shape
Drawing shape
*/
