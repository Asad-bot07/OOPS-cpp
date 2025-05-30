//passing object as argument

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
		void update(Box &);
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
void Box::update(Box &ob) //&ob=b1; 
{
	ob.length=ob.length+2;
	ob.breadth=ob.breadth+2;
	ob.height=ob.height+2;
}
int main()
{
	int l,b,h;
	cout<<"enter length, breadth & height:";
	cin>>l>>b>>h;
	Box b1;
	b1.set(l,b,h);
	b1.display();
	b1.update(b1);
	cout<<"\nAfter updation:"<<endl;
	b1.display();
}
/*
enter length, breadth & height:2
3
4
Length: 2
Breadth: 3
Height: 4
volume is:24
After updation:
Length: 4
Breadth: 5
Height: 6
volume is:120
*/


