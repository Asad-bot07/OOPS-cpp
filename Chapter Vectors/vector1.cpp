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
    
    // Creating a vector of 5 elements from
    // initializer list
    vector<int> v1 = {1, 4, 2, 3, 5};
    
    //displaying the first value
    cout<<v1[0]<<endl;

	//didplaying second value using at()
	cout<<v1.at(1);
	cout<<endl;
	
    // Creating a vector of 5 elements with
    // default value
    vector<int> v2(5, 9); //this vector will store five 9s
    
    //displaying first vector elements
    for(int x:v1){
    	cout<<x<<" ";
	}
	cout<<"\n";
	
    //displaying second vector elements
    for(int x:v2){
    	cout<<x<<" ";
	}
	
    
    return 0;
}

/*
1
4
1 4 2 3 5
9 9 9 9 9
*/
