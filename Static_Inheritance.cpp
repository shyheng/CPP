#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
//静态成员在继承中的特点
using namespace std;

class Base
{
public:
	static int getNum()
	{
		return sNum;
	}
	static int getNum(int param)
	{
		return sNum + param;
	}
public:
	static int sNum;
};

int Base::sNum = 10;

class Derived : public Base
{
public:
	static int sNum;//基类静态成员属性将被隐藏
#if 0
	//重定义一个函数，基类中重载的函数被隐藏
	static int getNum(int param1, int param2)
	{
		return sNum + param1 + param2;
	}
#else
	//改变基类函数的某个特征，返回值或者参数个数，将会隐藏基类重载的函数
	static void getNum(int param1, int param2)
	{
		cout << sNum + param1 + param2 << endl;
	}
#endif
};
int Derived::sNum = 20;

void test()
{
	Derived p1;
	cout << p1.sNum << endl;
}


int main()
{
	test();
	return 0;
}