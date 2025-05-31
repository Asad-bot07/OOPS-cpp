#include <iostream>
using namespace std;
class AbstractDevice {
public:
    virtual void start() = 0; // pure virtual function
};
class Printer : public AbstractDevice {
public:
    void start() override {
        cout << "Printer started" << endl;
    }
};
int main() {
    Printer p;
    p.start(); // user interacts only with start()
}
