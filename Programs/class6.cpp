//nesting of member function(calling one member function from
//another member function)

//parameterized member function and returning value from member
//function

#include<iostream>
#include<string>
using namespace std;

class Box
{
	int length,breadth,height;
	public:
		void set(int,int,int);
		int volume();
		void display();
};
void Box::set(int l,int b,int h)
{
	length=l;
	breadth=b;
	height=h;
}
int Box::volume()
{
	return(length*breadth*height);
}
void Box::display()
{
	cout<<"volume is:"<<volume(); //calling volume() from display()
}
int main()
{
	int l,b,h;
	cout<<"enter length, breadth & height:";
	cin>>l>>b>>h;
	Box b1;
	b1.set(l,b,h);
	b1.display();
}
/*
enter length, breadth & height:2
3
4
volume is:24
*/
