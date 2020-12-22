#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
//异常的声明周期
using namespace std;

class Myexception
{
public:
	Myexception()
	{
		cout << "构造函数" << endl;
	}
	~Myexception()
	{
		cout << "析构函数" << endl;
	}
	void error()
	{
		cout << "my error" << endl;
	}
};

class Myexception1
{
public:
	Myexception1()
	{
		cout << "构造函数" << endl;
	}
	~Myexception1()
	{
		cout << "析构函数" << endl;
	}
	void error()
	{
		cout << "my error" << endl;
	}
};

void fun()
{
	Myexception p1;
	//throw Myexception();//如果抛出匿名对象 他的声明周期在catch里面
	throw p1;//p1生命周期在throw之后
}

void test1()
{
	try
	{
		fun();
	}
	catch (Myexception &p)
	{
		p.error();
	}
	catch (Myexception1& p)
	{
		p.error();
	}
}

int main()
{
	test1();
	return 0;
}