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
    
    cout<<"current size of the vector: "<<v.size()<<endl;
    
    //adding to new colours to the existing vector
    v.push_back("Orange");
    v.push_back("Maroon");
    
    cout<<"after updation, current size of the vector is: "<<v.size()<<endl;
    
	cout<<"displaying values:\n";
	for(string i:v)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	//removing element from the end of a vector using pop_back()
	v.pop_back(); //Maroon will be removed
	
	cout<<"displaying values after deleting last element:\n";
	for(string i:v)
	{
		cout<<i<<" ";
	}
	cout<<endl;
    return 0;
}
/*
current size of the vector: 4
after updation, current size of the vector is: 6
displaying values:
Red Green Blue Yellow Orange Maroon
displaying values after deleting last element:
Red Green Blue Yellow Orange
*/