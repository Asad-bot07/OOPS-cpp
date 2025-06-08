//::->scope resolution operator which is used to access a class member
//outside of a class

/*
settetrs()->these are the member methods that can change or set
the values of instance variables. In our program set() is the
setter methos

getters()->these are the member methods that do not change values
of instance variables rather they can display or return values
of instance variables. In our program get() is the getter method
*/
#include<iostream>
#include<string.h>
using namespace std;
class myclass
{
	private:
	int id;
	string nm;
	public:
		void set(int,string); //only method signature is present
		void get();

};
void myclass::set(int i,string n)
{
	id=i;
	nm=n;
}
void myclass::get()
{
	cout<<"Id:"<<id<<endl;
	cout<<"Name:"<<nm<<endl;
}
int main()
{
	myclass ob,ob2;
	int a;
	string s;
	cout<<"enter id for 1st student:";
	cin>>a;
	cout<<"enter name for 1st student:";
	cin>>s;
	ob.set(a,s);
	cout<<"displaying id and name of 1st student:"<<endl;
	ob.get();
	ob2.set(2,"vivek");
	cout<<"displaying id and name of 1st student:"<<endl;
	ob2.get();
	return 0;
}
/*
enter id for 1st student:1
enter name for 1st student:aa
displaying id and name of 1st student:
Id:1
Name:aa
displaying id and name of 1st student:
Id:2
Name:vivek
*/
