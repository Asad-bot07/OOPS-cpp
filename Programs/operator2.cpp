 //unary operator overloading using friend function
#include<iostream>
using namespace std;
class Unary
{
	int a;
	public:
		void set(int a)
		{
			this->a=a;
		}
		void display()
		{
			cout<<"a="<<a<<endl;
		}
		friend Unary operator-(Unary &obj) //obj=ob1
		{
			Unary ob; //temporary object
			int x=-obj.a; //obj.a=5, so, -obj.a=-5, int x=-5
			ob.set(x); //ob.a=-5
			return ob;
		}
};
int main()
{
	Unary ob1;
	ob1.set(5);
	ob1.display();
	ob1=-ob1; //operator-(ob1)
	ob1.display();
}
/*
a=5
a=-5
*/
 /*Operator overloading is a compile-time polymorphism. 
It is an idea of giving special meaning to an existing 
operator in C++ without changing its original meaning.*/