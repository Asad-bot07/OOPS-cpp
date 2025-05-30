#include<iostream>
#include<string.h>
using namespace std;
class myclass
{
	private:
	int id;
	string nm;
	public:
		void set();
		void get();

};
void myclass::set()
{
	cout<<"enter id:";
	cin>>id;
	cout<<"enter name:";
	cin>>nm;	
}
void myclass::get()
{
	cout<<"Id:"<<id<<endl;
	cout<<"Name:"<<nm<<endl;
}
int main()
{
	myclass ob,ob2;
	cout<<"enter details for 1st stu:"<<endl;
	ob.set();
	cout<<"displaying id and name of 1st student:"<<endl;
	ob.get();
	cout<<"enter details for 2nd stu:"<<endl;
	ob2.set();
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
