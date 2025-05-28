#include<iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter year :" << endl; // Prompt user to enter a year
    cin >> year; // Input the year
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) // Leap year condition
        cout << "Leap year"; // Output if it's a leap year
    else
        cout << "Not a leap year"; // Output if it's not a leap year
}
/* output1 
Enter year :
1900
Not a leap year
 output2:
Enter year :
2024
Leap year
*/
