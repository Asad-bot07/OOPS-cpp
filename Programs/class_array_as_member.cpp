//array as data member of a class
#include<iostream>
using namespace std;
const int s=50;
class item
{
	int itemcode[s];
	float itemprice[s];
	int c;
	public:
		void count(){
			c=0;
		}
		void getitem();
		void displaysum();
		void remove();
		void displayitem();
};
void item::getitem()
{
	cout<<"enter item code:";
	cin>>itemcode[c];
	
	cout<<"enter item cost:";
	cin>>itemprice[c];
	
	c++;
}
void item::displaysum()
{
	int i;float sum=0;
	for(i=0;i<c;i++)
	{
		sum+=itemprice[i];
	}
	cout<<"\ntotal bill:"<<sum<<endl;
}
void item::remove()
{
	int a,i;
	cout<<"\nenter item code:";
	cin>>a;
	for(i=0;i<c;i++)
	{
		if(itemcode[i]==a)
		itemprice[i]=0;
	}
}
void item::displayitem()
{
	int i;
	cout<<"\nItemcode\t\tPrice\n";
	for(i=0;i<c;i++)
	{
		cout<<itemcode[i]<<"\t\t"<<itemprice[i]<<endl;
	}
}
int main()
{
	item order;
	order.count();
	int ch;
	do
	{
		cout<<"\n1.Add an item";
		cout<<"\n2.Display total value";
		cout<<"\n3.Delete an item";
		cout<<"\n4.Display all items";
		cout<<"\n5:Quit";
		cout<<"\nenter your choice:";
		cin>>ch;
		
		switch(ch)
		{
			case 1:order.getitem(); break;
			case 2:order.displaysum(); break;
			case 3:order.remove(); break;
			case 4:order.displayitem(); break;
			case 5:break;
			default:cout<<"\nwrong choice";
		}
	}while(ch!=5);
	return 0;
}
/*

1.Add an item
2.Display total value
3.Delete an item
4.Display all items
5:Quit
enter your choice:1
enter item code:1234
enter item cost:300

1.Add an item
2.Display total value
3.Delete an item
4.Display all items
5:Quit
enter your choice:1
enter item code:2323
enter item cost:340

1.Add an item
2.Display total value
3.Delete an item
4.Display all items
5:Quit
enter your choice:4

Itemcode                Price
1234            300
2323            340

1.Add an item
2.Display total value
3.Delete an item
4.Display all items
5:Quit
enter your choice:2

total bill:640

1.Add an item
2.Display total value
3.Delete an item
4.Display all items
5:Quit
enter your choice:1
enter item code:3344
enter item cost:200

1.Add an item
2.Display total value
3.Delete an item
4.Display all items
5:Quit
enter your choice:4

Itemcode                Price
1234            300
2323            340
3344            200

1.Add an item
2.Display total value
3.Delete an item
4.Display all items
5:Quit
enter your choice:2

total bill:840

1.Add an item
2.Display total value
3.Delete an item
4.Display all items
5:Quit
enter your choice:3

enter item code:1234

1.Add an item
2.Display total value
3.Delete an item
4.Display all items
5:Quit
enter your choice:4

Itemcode                Price
1234            0
2323            340
3344            200

1.Add an item
2.Display total value
3.Delete an item
4.Display all items
5:Quit
enter your choice:2

total bill:540

1.Add an item
2.Display total value
3.Delete an item
4.Display all items
5:Quit
enter your choice:8

wrong choice
1.Add an item
2.Display total value
3.Delete an item
4.Display all items
5:Quit
enter your choice:5
*/




