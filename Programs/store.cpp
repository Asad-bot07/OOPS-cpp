#include<iostream>
#include<string.h>
using namespace std;
class store
{
    private:
    float price;
    int id;
    string brand;
    string pname;
    public:
    void accept()
    {
        cout<<"Enter product name :\t";
        cin>>pname;
        cout<<"\nEnter product id :\t";
        cin>>id;
        cout<<"\nEnter brand name :\t";
        cin>>brand;
        cout<<"\nEnter price :\t";
        cin>>price;
    }
    void display()
    {
        cout<<"\nBrand :\t"<<brand<<endl;
        cout<<"\nProduct name :\t"<<pname<<endl;
        cout<<"\nProduct ID :\t"<<id<<endl;
        cout<<"\nPrice :\t"<<price<<endl;
    }
};
int main()
{
    store ob[5];int i;
    cout<<"\t\tEnter details\t\t\n";
     for(i=0;i<5;i++)
    {
        ob[i].accept();
    }
    cout<<"\t\tPRODUCT LIST\t\t\n";
    for(i=0;i<5;i++)
    {
        ob[i].display();
    }
    return 0;
}