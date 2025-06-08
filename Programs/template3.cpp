//class template
#include<iostream>
using namespace std;
template <class  T>
class exarray
{
	T a[3];
	public:
		void setval(T t1,T t2, T t3){
			a[0]=t1;
			a[1]=t2;
			a[2]=t3;
		}
		void show(){
			cout<<endl<<a[0]<<endl<<a[1]<<endl<<a[2]<<endl;
		}
};
int main(){
	exarray<int>ar;
	exarray<float>ar1;
	ar.setval(2,3,4);
	ar.show();
	ar1.setval(2.2,3.3,4.4);
	ar1.show();
	return 0;
}
/*

2
3
4

2.2
3.3
4.4
*/