#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <stdlib.h>
#include <string.h>
//继承中的同名问题
using namespace std;

class Base
{
public:
	Base(int a)
	{
		this->a = a;
	}
	void foo()
	{
		cout << "父类的foo函数" << endl;
	}
	int a;

};

class Son :public Base
{
public :
	Son(int a1, int a2) :Base(a1), a(a2)
	{}
	void foo()
	{
		cout << "子类的foo函数" << endl;
	}
	int a;
};

void test1()
{
	Son p(10, 20);
	//如果子类和父类有同名的成员变量，父类的成员会被隐藏，访问的是子类成员
	//如果子类和父类有同名的成员函数，父类的成员函数会被隐藏，访问的是子类成员函数
	cout << p.a << endl;
	p.foo();
}

int main()
{
	test1();
	return 0;
}