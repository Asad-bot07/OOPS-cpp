/*
Vector: In C++, vector is a dynamic array that stores collection of elements same type
in contiguous memory. It has the ability to resize itself automatically when 
an element is inserted or deleted.
To use a vector, we have to include the <vector> header file
*/
#include<iostream>
#include <vector>
using namespace std;

int main() {
	int i;
    // Creating a string vector
    vector<string> v ={"Red","Green","Blue","Yellow"};
    
	//changing Green to Violet using index number
	v[1]="Violet";
	
	cout<<"displaying values:\n";
	for(string i:v)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	//changing Blue to Orange using at()
	v.at(2)="Orange";
	
	cout<<"displaying values:\n";
	for(string i:v)
	{
		cout<<i<<" ";
	}
	cout<<endl;
    return 0;
}
/*
displaying values:
Red Violet Blue Yellow
displaying values:
Red Violet Orange Yellow
*/