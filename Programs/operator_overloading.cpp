/*Operator Overloading: It is example of compile-time polymorphism. It gives a special meaning to an existing
operator without changing its original meaning.

*/
//unary operator overloading using member function
#include<iostream>
using namespace std;
class Unary
{
	int a,b;
	public:
		void set(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		void display()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
		}
		void operator-()  //it is built-in operator function
		{
			a=-a;
			b=-b;
		}
		
};
int main()
{
	Unary ob1;
	ob1.set(5,-3);
	ob1.display();
	-ob1; //implicitly it will be converted to ob1.operator-();
	ob1.display();
}
/*
a=5
b=-3
a=-5
b=3
*/