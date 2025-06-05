
#include <iostream>  
using namespace std;  
template<class T>  
class A   
{  
    public:  
    T num1;  
    T num2;
    A(T a,T b)
    {
    	num1=a;
    	num2=b;
	}
	void accept(T x, T y)
	{
		num1=x;
		num2=y;
	}
    void add()  
    {  
        cout << "Addition of num1 and num2 : " << num1+num2<<endl;  
    }  
      
};  
  
int main()  
{  
    A<int> ob1(2,3);  
    A<float> ob2(3.4,5.3);
    A<string> ob3("Java","Python");
	ob1.add();
	ob2.add();
	ob3.add();
    
	ob1.accept(10,20);
	ob2.accept(12.3,14.5);
	ob1.add();
	ob2.add();  
    return 0;  
}  
/*
Addition of num1 and num2 : 5
Addition of num1 and num2 : 8.7
Addition of num1 and num2 : 30
Addition of num1 and num2 : 26.8
*/