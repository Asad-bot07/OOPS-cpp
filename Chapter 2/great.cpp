#include<iostream>
using namespace std;
// Function to find the greatest among three numbers
int grea(int v, int m, int n)
{
    if(v > m && v > n)
        return v;
    else if(m > v && m > n)
        return m;
    else if(n > v && n > m)
        return n;
    else
        return 0; // Return 0 if all numbers are equal
}
// Inline function that calls the grea() function
inline int check(int a, int b, int c)
{
    return grea(a, b, c);
}
int main()
{
    int s, q, l, result;
    cout << "Enter numbers " << endl; // Prompt user for input
    cin >> s >> q >> l; // Input three integers
    result = check(s, q, l); // Call inline function to find greatest
    if(result == 0)
        cout << "All are equal!!"; // All values are equal
    else
        cout << result << " is greatest!" << endl; // Output the greatest value
}
/*output
Enter numbers 
5 9 2
9 is greatest!/*/
