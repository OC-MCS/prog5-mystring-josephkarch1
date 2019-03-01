#include<iostream>
#include "MyString.h"

using namespace std;

int main()
{

	// test copy constructor
	MyString String1("Bob");
	MyString String14("Joe");
	MyString String2(String1);

	// test that it doesn't crash cout-ing an empty string
	MyString String20;
	cout << String20 << endl;
	cout << "if it made it here, it passed the test" << endl;

	// test with both methods of output
	cout << "test both methods of output, << and c_str() " << endl;
	cout << String1 << endl;
	cout << String14 << endl;
	cout << String2.c_str() << endl;
	cout << String14.c_str() << endl;

	// test assignment operator
	cout << "test assignment operator" << endl;
	MyString String3("Fred");	
	MyString String4 = String3;
	cout << String4.c_str() << endl;

	// check c_str() function
	cout << "check c_str() function " << endl;
	MyString String7("check C_str");
	cout << String7.c_str() << endl;

	// check overloaded assignment operators
	cout << "check overloaded assignment operator" << endl;
	MyString String9 = "Hello ";
	MyString String10 = "World!";
	
	cout << String9.c_str() << endl;
	cout << String10.c_str() << endl;

	// check overloaded + operator
	cout << "test overloaded + operator" << endl; 
	MyString String13 = String9 + String10;
	 cout << String13 << endl;

	// check String Comparison
	 cout << "test string comparison operator" << endl;
	MyString String5("Bob");
	MyString String6("Bob");
	
	if (String5 == String6)
	{
		cout << "String comparison Works!" << endl;
	}

	// check overloaded output operator
	cout << "test overloaded output operator" << endl;
	MyString String12 = "Overloaded output operator";
	cout << String12 << endl;


	// test case where 2 strings are equal. does it break the function?
	cout << "Test when 2 strings are equal" << endl;
	MyString String15("Joe");
	MyString String16("Joe");
	String15 = String16;
	cout << String15 << endl;

	return 0;
}