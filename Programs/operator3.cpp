// C++ Program to Demonstrate
// binary Operator Overloading using member function
#include <iostream>
using namespace std;
class Complex {
private:
	int real, imag;
public:
	Complex(int r = 0, int i = 0)//parameterized constructor with default values
	{
		real = r;
		imag = i;
	}
	// This is automatically called when '+' is used with
	// between two Complex objects
	Complex operator+(Complex &obj) //obj=c2
	{
		Complex res; //temporary object
		res.real = real + obj.real; //real=c1.real, obj.real=c2.real
		res.imag = imag + obj.imag;
		return res;
	}
	void print() { cout << real << " + i" << imag << '\n'; }
};
int main()
{
	Complex c1(10, 5), c2(2, 4);
	Complex c3 = c1 + c2; //c1.operator+(c2)
	cout<<"first complex number:"<<endl;
	c1.print();
	cout<<"second complex number:"<<endl;
	c2.print();
	cout<<"result:"<<endl;
	c3.print();
}
/*
first complex number:
10 + i5
second complex number:
2 + i4
result:
12 + i9
*/