//object as function argument
//Addition of two time
#include<iostream>
using namespace std;
class time
{
	int hour,minute;
	public:
		void gettime(int h,int m){
			hour=h;
			minute=m;
		}
		
		void puttime()
		{
			cout<<"hour="<<hour;
			cout<<" and minute="<<minute<<endl;
		}
		void sum(time t1,time t2)
		{
			minute=t1.minute+t2.minute;
			hour=minute/60;
			minute=minute%60;
			hour=hour+t1.hour+t2.hour;
		}
};
int main()
{
	time t1,t2,t3;
	t1.gettime(2,45);
	t2.gettime(3,30);
	
	t3.sum(t1,t2); //t3=t1+t2
	
	cout<<"t1:";
	t1.puttime();
	cout<<"t2:";
	t2.puttime();
	cout<<"t3:";
	t3.puttime();
	return 0;
}
/*
t1:hour=2 and minute=45
t2:hour=3 and minute=30
t3:hour=6 and minute=15
*/


