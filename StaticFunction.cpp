#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<string.h>
#include<stdlib.h>

using namespace std;

const int num = 10;//const修饰的全局变量保存在常量区，不可更改

class person
{
public:
	int a;
	static int b;
	const static int c = 100;//const修饰的静态成员变量 是保存在常量区 不可修改（只读） 在内存中只有一份
	void show()
	{
		cout << a << " " << b << endl;
	}
	static void static_show()//静态成员函数 可以访问静态成员变量 不能访问非静态成员变量
	{
		//cout << a << " " << b << endl;
		cout  << " " << b << endl;
	}
};

int person::b = 100;

void text1()
{
	person::static_show();//通过流类的作用域访问静态成员函数
	person p1;
	p1.static_show();//通过对象访问静态成员函数
}

void text2()
{
	cout << person::c << endl;
	person p1;
	cout << p1.c << endl;
}

int main()
{
	text1();
	return 0;
}