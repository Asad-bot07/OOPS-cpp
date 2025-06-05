/*
Function Templates
We write a generic function that can be used for different data types. 
Examples of function templates are sort(), max(), min(), printArray(). 
*/

// C++ Program to demonstrate
// Use of template
#include <iostream>
using namespace std;

// One function works for all data types. This would work
// even for user defined types if operator '>' is overloaded
template <typename T> 
T myMax(T x, T y)
{
	return (x > y) ? x : y;
}

int main()
{
	// Call myMax for int
	cout << myMax<int>(3, 7) << endl;
	// call myMax for double
	cout << myMax<double>(3.2, 7.1) << endl;
	// call myMax for char
	cout << myMax<char>('g', 'e') << endl;

	return 0;
}
/*
7
7.1
g
*/
