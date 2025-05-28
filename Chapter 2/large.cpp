#include<iostream>
using namespace std;
// Inline function using ternary operator to find the greatest of three numbers
inline int check(int a, int b, int c)
{
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}
int main()
{
    int s, q, l, result;
    cout << "Enter numbers " << endl; // Prompt user for input
    cin >> s >> q >> l; // Input three integers
    result = check(s, q, l); // Call inline function to get greatest number
    cout << result << " is greatest!" << endl; // Output the result
}
/*output
Enter numbers 
3 7 5
7 is greatest!
*/
