#include<iostream>
using namespace std;
int main()
{
    int i, t = 0, t1 = 1, sum; // Initialize first two Fibonacci numbers and sum variable
    cout << t << " " << t1 << " "; // Print first two numbers of the Fibonacci series
    for(i = 2; i <= 10; i++) // Loop from 2 to 10 to print the next 9 Fibonacci numbers
    {
        sum = t + t1; // Calculate next Fibonacci number
        cout << sum << " "; // Print the next Fibonacci number
        t = t1; // Update t to previous t1
        t1 = sum; // Update t1 to current sum
    }
}
//output
//0 1 1 2 3 5 8 13 21 34 55 
