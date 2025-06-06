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
	
	//creating an empty vector
	vector<int> v1;
	
	//checking for empty vector using empty() function, it will return 1, if the
	//vector is empty, otherwise return 0
	cout<<"Is vector v1 empty? "<<v1.empty();
	
    // Creating a string vector
    vector<string> v ={"Red","Green","Blue","Yellow"};
    
    cout<<"\nIs vector v empty? "<<v.empty();
    
    return 0;
}

/*
Is vector v1 empty? 1
Is vector v empty? 0
*/

