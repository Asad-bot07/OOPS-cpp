//binary operator overloading using friend function
#include <iostream>
using namespace std;
class Complex {
private:
	int real, imag;

public:
	Complex(int r = 0, int i = 0)
	{
		real = r;
		imag = i;
	}
	void print() { cout << real << " + i" << imag << endl; }
	// The global operator function is made friend of this
	// class so that it can access private members
	friend Complex operator+(Complex &c1,
							Complex &c2);
};
Complex operator+(Complex &c1, Complex &c2)
{
	//return Complex(c1.real + c2.real, c1.imag + c2.imag);
	Complex temp;
	temp.real=c1.real+c2.real;
	temp.imag=c1.imag+c2.imag;
	return temp;
}
int main()
{
	Complex c1(10, 5), c2(2, 4);
	Complex c3 = c1+ c2; // An example call to "operator+"
	c3.print();
	return 0;
}
/*
12 + i9
*/