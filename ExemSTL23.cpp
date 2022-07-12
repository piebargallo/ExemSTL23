// C++ program to demonstrate forward iterator
#include <iostream>
#include <vector>
using namespace std;

// Driver code
int main() {
	
	vector<int> v1 = { 1, 4, 9, 16 };

	// Declaring an iterator
	vector<int>::iterator i1;

	for (i1 = v1.begin(); i1 != v1.end(); ++i1) {
		// Assigning values to locations pointed by iterator
		*i1 = 1;
	}

	for (i1 = v1.begin(); i1 != v1.end(); ++i1) {
		// Accessing values at locations pointed by iterator
		cout << (*i1) << " ";
	}

	return 0;

} // End driver
