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
    
    //displaying first value using front()
    cout<<v.front()<<endl;
    
    //displaying last value using back()
    cout<<v.back()<<endl;
    
    //displaying size of the vector using size()
    cout<<v.size()<<endl;
    
    cout<<"displaying elements using for loop\n";
    for(i=0;i<v.size();i++)
    {
    	cout<<v[i]<<" ";
	}
	cout<<endl;
	
    return 0;
}

/*
Red
Yellow
4
displaying elements using for loop
Red Green Blue Yellow
*/

