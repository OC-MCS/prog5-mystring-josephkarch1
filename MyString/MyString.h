#pragma once

#include <iostream>
using namespace std;




class MyString;
ostream &operator << (ostream&, MyString&);


class MyString 
{
	private:
		char* str;			// holds the c-string
		char* addStr;		// string to hold the strcat data

	public:
		MyString();
		MyString(const MyString &other);
		MyString(const char* str);
		~MyString();
		const char * c_str();
		MyString operator = (const MyString &other);
		MyString operator + (const MyString &other);
		bool operator== (const MyString &other);
		
};


