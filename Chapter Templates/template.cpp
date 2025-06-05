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
void swap(T *x, T *y)
{
	T temp = *x;
	*x=*y;
	*y=temp;
}

int main()
{
	int a=6;
	int b=12;
	char *left ="to the west";
	char *right = "to the east";
	swap<int>(&a,&b);
	swap<char*>(left , right);
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"left="<<left<<endl;
	cout<<"right="<<right<<endl;
	
	
	return 0;
}
/*
a=12
b=6
left=to the east
right=to the west
*/
