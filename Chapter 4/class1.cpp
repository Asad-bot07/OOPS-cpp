//C++ has differenct access specifiers(visibility or scope)--
//1. private(members can't be accessible from outside the class)
//2. public(members can be accessible from inside as well as outside the class)
//3. protected(protected members of a class can be accessed by its own class as well as its child class only)
//default access specifier--private
#include<iostream>
#include<string.h>
using namespace std;
class myclass
{
	public:
	int id;
	string nm;
};
int main()
{
	myclass ob,ob2;
	cout<<"enter id for 1st student:";
	cin>>ob.id;
	cout<<"enter name for 1st student:";
	cin>>ob.nm;
	cout<<"Id is "<<ob.id<<endl;
	cout<<"Name is "<<ob.nm<<endl;
	ob2.id=2;
	ob2.nm ="vivek";
	cout<<"Id is "<<ob2.id<<endl;
	cout<<"Name is "<<ob2.nm <<endl;
	return 0;
}
/*
enter id for 1st student:1
enter name for 1st student:Dibyendu
Id is 1
Name is Dibyendu
Id is 2
Name is vivek
*/

