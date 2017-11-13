// Pointer3.cpp : A simple C++ program that uses pointers as function parameters


#include <iostream>
using namespace std;

// function prototypes
void getNumber(int * );
void doubleValue(int * );


int main()
{	
	int number;

	// call getNumber and pass the address of number
	getNumber(&number);

	// call doubleValue and pass the address of number
	doubleValue(&number);

	// display the result of the doubled number
	cout << "That value doubled is: " << number << endl;

	cin.ignore();
	cin.get();

	return 0;
}

	// ==============================================================================
	// The parameter (input) is a pointer. 
	// The value entered by the user is stored in the variable pointed to by (input).
	// ==============================================================================

void getNumber(int *input)
{
	cout << "Enter an integer number: ";
	cin >> *input;	//  *input allows the value to be stored to the variable that (input) points to
}

	// ============================================================
	// The parameter (val) is a pointer.
	// (val) points to a variable and multiplies that value by two
	// ============================================================

void doubleValue(int *val)
{
	*val *= 2;	// multiple the value pointed to by two
}
