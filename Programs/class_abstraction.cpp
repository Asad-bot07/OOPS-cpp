/*Data abstraction is one of the most essential and important 
features of object-oriented programming in C++. Abstraction 
means displaying only essential information about the data to 
the outside world and hiding the background details or 
implementation. 

Abstraction using Access Specifiers--

1. Members declared as public in a class can be accessed from 
anywhere in the program.

2. Members declared as private in a class, can be accessed only 
from within the class. They are not allowed to be accessed 
from any part of the code outside the class

Advantages of Data Abstraction--
1. Avoids code duplication and increases reusability.
2. Can change the internal implementation of the class 
independently without affecting the user.
3. Helps to increase the security of an application or 
program as only important details are provided to the user.

In the above program we are not allowed to access the variables 
a and b directly, however, one can call the function set() to
set the values in a and b and the function display() to 
display the values of a and b. 

*/

// C++ Program to Demonstrate the
// working of Abstraction
#include <iostream>
using namespace std;

class implementAbstraction {
private:
	int a, b;

public:
	// method to set values of
	// private members
	void set(int x, int y)
	{
		a = x;
		b = y;
	}

	void display()
	{
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
	}
};

int main()
{
	implementAbstraction obj;
	obj.set(10, 20);
	obj.display();
	return 0;
}
/*
a = 10
b = 20
*/


