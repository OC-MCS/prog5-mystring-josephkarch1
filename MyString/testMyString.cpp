#include<iostream>
#include "MyString.h"

using namespace std;

int main()
{

	// initialize two strings for testing
	MyString String1("Bob");
	MyString String2(String1);
	cout << String2.c_str() << endl;


	// test assignment operator
	MyString String3("Fred");	
	MyString String4 = String3;
	cout << String4.c_str() << endl;

	// check c_str() function
	MyString String7("check C_str");
	cout << String7.c_str() << endl;

	// check overloaded assignment operators
	MyString String9 = "Hello ";
	MyString String10 = "World!";
	
	cout << String9.c_str() << endl;
	cout << String10.c_str() << endl;
	
	MyString String11 = String9 + String10;
	cout << String11.c_str() << endl;
	
	// check String Comparison
	MyString String5("Bob");
	MyString String6("Bob");
	
	if (String5 == String6)
	{
		cout << "String comparison Works!" << endl;
	}

	// check overloaded output operator
	cout << String6 << endl;


	return 0;
}