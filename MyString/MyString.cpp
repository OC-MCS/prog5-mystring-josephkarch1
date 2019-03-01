#include <iostream>
#include "MyString.h"

using namespace std;

MyString::MyString()
{
	str = nullptr;
}

MyString::MyString(const char *other)
{
	if (other != nullptr)
	{
		str = new char[strlen(other) + 1];
		strcpy_s(str, strlen(other) +1, other);
		cout << "My Copy Constructor works!" << endl;
	}

	else
	{
		str = nullptr;
	}

}

MyString::MyString(MyString &other)
{
	if (other.str != nullptr)
	{
		str = new char[strlen(other.str) + 1];
		strcpy_s(str, strlen(other.str) +1, other.str);
	}

	else
	{
		str = nullptr; 
	}



}

MyString::~MyString()
{
	delete[] str;
	cout << "My Destructor works!" << endl;
}

MyString MyString::operator= (const MyString &other)
{
	if (this != &other)
	{
		if (other.str == nullptr)
		{
			delete[] str;
			str = nullptr;
		}

		else
		{
			delete[] str;
			str = new char[strlen(other.str) + 1];
			strcpy_s(str, strlen(other.str) + 1, other.str);
		}

	}

	return *this;
}

MyString MyString::operator+(const MyString &other)
{
	char * tempStr;
	
	if (str == nullptr && other.str == nullptr)
	{
		tempStr = nullptr;
	}

	else if (str == nullptr)
	{
		tempStr = new char[strlen(other.str) + 1];
		strcpy_s(tempStr, strlen(other.str) + 1, other.str);
	}

	else if (other.str == nullptr)
	{
		tempStr = new char[strlen(str) + 1];
		strcpy_s(tempStr, strlen(str) + 1, str);
	}

	else
	{
		tempStr = new char[strlen(str) + strlen(other.str) + 2];
		strcpy_s(tempStr, strlen(str) + strlen(other.str) +2, str);
		strcat_s(tempStr, strlen(str) + strlen(other.str) + 2, other.str);
	}
	return tempStr;
	delete[] tempStr;
}

bool MyString::operator==(const MyString &other)
{
	bool temp;

	if (str == nullptr && other.str == nullptr)
	{
		temp = false;
	}

	else if(str == nullptr)
	{
		temp = false;
	}

	else if (other.str == nullptr)
	{
		temp = false;
	}

	else
	{
		if (strcmp(str, other.str) == 0)
		{
			temp = true;
		}

		else
		{
			temp = false;
		}
	}
	
	return temp;
}

const char* MyString::c_str()
{
	const char* newStr = str;

	return newStr;
}

ostream &operator << (ostream& strm, MyString& other)
{
	if (other == nullptr)
	{
		strm << " ";
	}

	else
	{
		strm << other.c_str();
	}
	
	return strm;
}




