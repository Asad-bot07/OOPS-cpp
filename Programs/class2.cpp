//setting values to data members through member function
#include<iostream>
#include<string.h>
using namespace std;
class myclass
{
	public:
	int id;
	string nm;
	void set()
	{
	cout<<"enter id:";
	cin>>id;
	cout<<"enter name:";
	cin>>nm;		
	}
	void get()
	{
	cout<<"Id is: "<<id<<endl;
	cout<<"Name is: "<<nm <<endl;
	}
};
int main()
{
	myclass ob,ob2;
	cout<<"Enter Id and Name for 1st student:"<<endl;
	ob.set();
	cout<<"Displaying details of student 1:"<<endl;
	ob.get();
	
	cout<<"Enter Id and Name for 2nd student:"<<endl;
	ob2.set();
	cout<<"Displaying details of student 2:"<<endl;
	ob2.get();
	return 0;
}
/*
Enter Id and Name for 1st student:
enter id:1
enter name:aa
Displaying details of student 1:
Id is: 1
Name is: aa
Enter Id and Name for 2nd student:
enter id:2
enter name:bb
Displaying details of student 2:
Id is: 2
Name is: bb

*/


