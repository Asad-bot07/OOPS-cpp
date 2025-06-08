//instance variable/data members:variables present in the class
//member methods: methods/functions present in a class
//In the below code, we have kept variables is private and
//methods in public block, so, methods become the public interfaces/
//gateways through which we can set/display values to instance variables
 
#include<iostream>
#include<string.h>
using namespace std;
class myclass
{
	private:
	int id;
	string nm;
	public:
		void set(int i,string n)
		{
			id=i;
			nm=n;
		}
		void get()
		{
			cout<<"Id:"<<id<<endl;
			cout<<"Name:"<<nm<<endl;
		}

};
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
	cout<<"displaying id and name of 2nd student:"<<endl;
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
