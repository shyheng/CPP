#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
//栈解旋
using namespace std;

class Person
{
public:
	Person(string name)
	{
		cout << "构造" << endl;
		this->name = name;
	}
	~Person()
	{
		cout << "析构" << endl;
	}
	string name;
};

void fun()
{
	Person p2("shy");
	Person p3("shy");
	cout << "001" << endl;
	throw 1;
	
}

void test1()
{
	try
	{
		Person p1("shy");
		fun();
	}
	catch (int)
	{
		cout << "002" << endl;
		cout << "捕获到异常" << endl;
	}
}

int main()
{
	test1();
	return 0;
}