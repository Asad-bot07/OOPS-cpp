#include <iostream>
using namespace std;
// Function to add two integers
int add(int a, int b) {
    return a + b;
}
// Function to add two floats
float add(float a, float b) {
    return a + b;
}
int main() {
    cout << "Int addition: " << add(5, 3) << endl;
    cout << "Float addition: " << add(2.5f, 4.3f) << endl;
    return 0;
}
/*
Int addition: 8
Float addition: 6.8
  */
