//returning object

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
		Box sum(Box &);
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
	cout<<"Length: "<<length<<endl;
	cout<<"Breadth: "<<breadth<<endl;
	cout<<"Height: "<<height<<endl;
	cout<<"volume is:"<<volume(); //calling volume() from display()
}
Box Box::sum(Box &ob)
{
	Box temp;
	temp.length=length+ob.length; //length=b1.length,ob.length=b2.length
	temp.breadth=breadth+ob.breadth;
	temp.height=height+ob.height;
	return temp;
}
int main()
{
	Box b1,b2,b3;
	b1.set(2,3,4);
	cout<<"showing 1st box details:"<<endl;
	b1.display();
	b2.set(10,20,30);
	cout<<"\nshowing 2nd box details:"<<endl;
	b2.display();
	b3=b1.sum(b2);
	cout<<"\nAfter addition:"<<endl;
	b3.display();
}
/*
showing 1st box details:
Length: 2
Breadth: 3
Height: 4
volume is:24
showing 2nd box details:
Length: 10
Breadth: 20
Height: 30
volume is:6000
After addition:
Length: 12
Breadth: 23
Height: 34
volume is:9384
*/


