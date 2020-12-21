#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
//异常类型严格匹配
using namespace std;

int mydive(int a, int b)
{
	string str = "hello";
	if (b == 0)
		throw ;//处理异常 抛出异常 抛出一个类型

	return a / b;
}

void test1()
{
	//尝试捕获异常
	try
	{
		mydive(2, 0);
	}
	catch (char)//如果没有捕获的抛出的异常，程序会被终止
	{
		//cout << "捕获一个char类型的异常" << endl;
		throw 'a';
	}
	catch (int)
	{
		cout << "捕获一个int类型的异常" << endl;
	}
	catch (double)
	{
		cout << "捕获一个double类型的异常" << endl;
	}
	catch (...)
	{
		cout << "捕获一个其他类型的异常" << endl;
	}
}

int main()
{
	try {
		test1();
	}
	catch (char)
	{
		cout << "捕获一个char类型的异常" << endl;
	}
}