#include<iostream>
using namespace std;
// Function to check if a number is a palindrome
int pal(int num)
{
    int n = num, sum = 0, r;
    while(num > 0)
    {
        r = num % 10; // Get last digit
        sum = sum * 10 + r; // Reverse the number
        num /= 10; // Remove last digit
    }
    return (n == sum) ? 1 : 0; // Return 1 if original and reversed are equal
}
int main()
{
    int n, result;
    cout << "Enter number :\n"; // Prompt user for input
    cin >> n; // Input the number
    result = pal(n); // Call the palindrome check function
    if(result)
        cout << "Palindrome"; // If result is 1, it's a palindrome
    else
        cout << "Not Palindrome"; // Otherwise, not a palindrome
    return 0;
}
/* output1:
Enter number :
121
Palindrome

output2:
Enter number :
123
Not Palindrome
*/
