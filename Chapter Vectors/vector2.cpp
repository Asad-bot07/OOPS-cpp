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

    // Creating an empty vector
    vector<int> v;
    
    //adding element at the end of a vector
    v.push_back(5);
    v.push_back(8);
    v.push_back(3);
    v.push_back(4);
    v.push_back(2);
    
    cout<<"displaying elements using for each loop\n";
    for(int i:v)
    {
    	cout<<i<<" ";
	}
	cout<<endl;
    
    return 0;
}

/*
displaying elements
5 8 3 4 2
*/
