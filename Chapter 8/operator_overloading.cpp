#include <iostream>
using namespace std;
class Point {
    int x, y;
public:
    Point(int a, int b) : x(a), y(b) {}
    // Overload + operator
    Point operator+(const Point& p) {
        return Point(x + p.x, y + p.y);
    }
    void display() {
        cout << "x: " << x << ", y: " << y << endl;
    }
};
int main() {
    Point p1(2, 3), p2(4, 5);
    Point p3 = p1 + p2;
    p3.display();
    return 0;
}
/*
x: 6, y: 8
*/
