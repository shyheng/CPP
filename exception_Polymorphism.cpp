#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
//多态实现异常接口的捕获
using namespace std;

//基类
class Myexcepation
{
public:
	virtual void error() = 0;
};

class Out_of_range :public Myexcepation
{
public:
	void error()
	{
		cout << "Out_of_range" << endl;
	}
};
class Bad_cast :public Myexcepation
{
public:
	void error()
	{
		cout << "Bad_cast" << endl;
	}
};

void fun()
{
	//throw Out_of_range();
	throw Bad_cast();
}

void test1()
{
	try
	{
		fun();
	}
	catch (Myexcepation &p)
	{
		p.error();
	}
}

int main()
{
	test1();
	return 0;
}