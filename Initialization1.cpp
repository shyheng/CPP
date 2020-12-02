#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<string.h>
//继承方式的控制权限
using namespace std;

class Base
{
public:
	int a;
protected:
	int b;
private:
	int c;
};

//公有的继承方式 基类
class A :public Base
{
//public:
//	int a;
//protected:
//	int b;
//private:
//	int c;
public:
	int d;
	void show()
	{
		//子类的成员函数去访问父类成员 子类不可以访问父类的私有成员
		cout << a << b << endl;
	}
};

class B :protected Base
{
public:
	int d;
};

void text1()
{
	A p;
	//p通过类外可以访问公有权
	p.a = 10;
	p.d = 20;
}

int main()
{

	return 0;
}