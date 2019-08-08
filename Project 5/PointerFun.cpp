/* Pointer manipulation exercises from the textbook. Assigns an array,
 * then displays array and references array values using a variety of methods.
 * 2/25/2015
 * Alex Debrecht */

#include <iostream>
using namespace std;


// function main begins programs
int main() {

	// a
	const int SIZE = 5; // set constant SIZE
	unsigned int values[SIZE] = {2, 4, 6, 8, 10}; // declare and initialize array

	// b
	unsigned int *vPtr; // declare pointer for unsigned int

	// c
	// Display value elements using array subscript
	cout << "Array subscript:" << endl;
	for (int i = 0; i < SIZE; ++i) {
		cout << "values[" << i << "] = " << values[i] << endl;
	}
	cout << endl;

	// d
	// Both statements assign vPtr the address of the array values
	vPtr = &values[0];
	vPtr = values;

	// e
	// Display array elements with pointer offset notation
	cout << "Pointer offset:" << endl;
	for (int i = 0; i < SIZE; ++i) {
		cout << "*(vPtr + "<< i << ") = " << *(vPtr + i) << endl;
	}
	cout << endl;

	// f
	// Display array elements with pointer offset notation using array name as pointer
	cout << "Pointer offset with array name:" << endl;
	for (int i = 0; i < SIZE; ++i) {
			cout << "*(values + " << i << ") = " << *(values + i) << endl;
		}
	cout << endl;

	// g
	// Display array elements with subscripted pointer notation
	cout << "Pointer subscript:" << endl;
	for (int i = 0; i < SIZE; ++i) {
			cout << "vPtr[" << i << "] = " << vPtr[i] << endl;
		}
	cout << endl;

	// h
	int var0 = values[4]; // reference values[4] w/ array subscript
	int var1 = *(values + 4); // reference values[4] w/ pointer offset using array name
	int var2 = vPtr[4]; // reference values[4] w/ pointer subscript
	int var3 = *(vPtr + 4); // reference values[4] w/ pointer offset

	cout << "values[4] expressed with:" << endl << "Array subscript notation: "
			<< var0 << endl << "Pointer offset using array name: " << var1 <<
			endl << "Pointer subscript: " << var2 << endl << "Pointer offset: "
			<< var3 << endl << endl;

	// i
	cout << "The address of vPtr + 3 is " << vPtr + 3 << "." << endl; // Display address of vPtr + 3
	cout << "The value stored at " << vPtr + 3 << " is " << *(vPtr + 3)
			<< "." << endl; // Display value at address of vPtr + 3

	// j
	vPtr = &values[4]; // Assign vPtr to point to values[4]
	cout << "If vPtr points to values[4], (vPtr -= 4) references "
			<< (vPtr -= 4) << endl; // Determine vPtr -= 4 reference
	cout << "The value stored at " << vPtr << " is " << *vPtr << endl; // Since vPtr reference was changed above, just use vPtr


} // end main
