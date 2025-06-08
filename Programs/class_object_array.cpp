//array of objects
#include<iostream>
using namespace std;
const int s=3;
class employee
{
	char nm[30];
	int age;
	public:
		void getdata();
		void putdata();
};
void employee::getdata()
{
	cout<<"enter name:";
	cin>>nm;
	cout<<"enter age:";
	cin>>age;
}
void employee::putdata()
{
	cout<<"\nname="<<nm<<endl;
	cout<<"age="<<age<<endl;
}
int main()
{
	employee ob[s];
	int i;
	for(i=0;i<s;i++)
	{
		cout<<"accepting details of employee "<<(i+1)<<":"<<endl;
		ob[i].getdata();
		cout<<"\ndisplaying details of employee "<<(i+1)<<":"<<endl;
		ob[i].putdata();
	}
	return 0;
}
/*
accepting details of employee 1:
enter name:amal
enter age:30

displaying details of employee 1:

name=amal
age=30
accepting details of employee 2:
enter name:bimal
enter age:28

displaying details of employee 2:

name=bimal
age=28
accepting details of employee 3:
enter name:kamal
enter age:34

displaying details of employee 3:

name=kamal
age=34
*/


