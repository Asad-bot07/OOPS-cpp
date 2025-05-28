#include<iostream>
using namespace std;
// Recursive function to calculate Fibonacci number at position n
int fibbo(int n)
{
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fibbo(n - 1) + fibbo(n - 2);
}
int main()
{
    int num, i;
    cout << "Enter the number of series :\n"; // Prompt user to enter number of terms
    cin >> num; // Input the number

    for(i = 0; i <= num; i++) // Print Fibonacci series up to num terms
    {
        cout << fibbo(i) << " ";
    }
    return 0;
}
/*
Enter the number of series :
7
0 1 1 2 3 5 8 13 
*/
