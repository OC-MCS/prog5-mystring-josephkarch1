#pragma once

#include <iostream>
using namespace std;
// MyString class declaration goes here



class MyString;
ostream &operator << (ostream&, MyString&);


class MyString 
{
	private:
		char* str;
		char* addStr;

	public:
		MyString();
		MyString(MyString &other);
		MyString(const char * str);
		~MyString();
		const char * c_str();
		MyString operator= (const MyString &other);
		MyString operator+ (const MyString &other);
		bool operator== (const MyString &other);
		
};


