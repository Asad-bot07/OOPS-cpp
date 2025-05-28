#include<iostream>
using namespace std;
int main()
{
    int n, c = 0, i; // Initialize c to 0
    cout << "Enter number :" << endl; // Prompt user for input
    cin >> n; // Input the numbe
    if(n == 1)
    {
        cout << "Not Prime" << endl; // 1 is not a prime number
    }
    else
    {
        for(i = 2; i <= n / 2; i++) // Loop to check divisibility
        {
            if(n % i == 0)
            {
                c++; // If divisible, increment counter
                break; // No need to check further
            }
        }
        if(c)
            cout << "Not Prime" << endl; // If divisible, not prime
        else
            cout << "Prime" << endl; // Else, prime
    }
}
