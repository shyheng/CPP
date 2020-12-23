#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <stdexcept>
//编写自己的异常类
using namespace std;

class Loveerror:public exception
{
public:
	Loveerror(string data)
	{
		this->data = data;
	}
	Loveerror(char* data)
	{
		this->data = data;
	}
	const char* what() const
	{
		return data.c_str();
	}
	string data;
};

void fun()
{
	throw Loveerror("爱情的错误");
}

void test1()
{
	try
	{
		fun();
	}
	catch (exception& p)
	{
		cout << p.what() << endl;
	}
}

int main()
{
	test1();
	return 0;
}
