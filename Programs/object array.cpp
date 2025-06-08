//object array
#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		void setval(int x)
		{
			a=x;
		}
		void display()
		{
			cout<<"a="<<a<<endl;
		}
};
int main()
{
	A ob[3]; //three objects will be created i.e. ob[0],ob[1],ob[2]
	int i,n;
	cout<<"Setting data member to each array element(which is object)"<<endl;
	for(i=0;i<3;i++)
	{
		cout<<"Enter value for object "<<(i+1)<<":"<<endl;
		cin>>n;
		ob[i].setval(n);
	}
	
	cout<<"Displaying data member to each array element(which is object)"<<endl;
	for(i=0;i<3;i++)
	{
		cout<<"Displaying value for object "<<(i+1)<<":"<<endl;
		ob[i].display();
	}
}
/*
Setting data member to each array element(which is object)
Enter value for object 1:
4
Enter value for object 2:
8
Enter value for object 3:
12
Displaying data member to each array element(which is object)
Displaying value for object 1:
a=4
Displaying value for object 2:
a=8
Displaying value for object 3:
a=12

*/
