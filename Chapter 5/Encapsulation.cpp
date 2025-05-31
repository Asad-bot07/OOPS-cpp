#include <iostream>
using namespace std;
class Account {
private:
    int balance; // data hidden
public:
    void setBalance(int amt) {
        if (amt >= 0)
            balance = amt; // controlled access
    }
    int getBalance() {
        return balance;
    }
};
int main() {
    Account acc;
    acc.setBalance(1000);
    cout << "Balance: " << acc.getBalance() << endl;
}
