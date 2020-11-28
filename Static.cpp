#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<string>
#include<string.h>
#include<iostream>

using namespace std;

class person
{
public:
	int a; 
	//静态成员变量不能在类内初始化，定义在全局 类内只能声明 声明的作用只是限制静态成员变量作用域
	static int b;//静态成员变量，在编译阶段就分配内存 存在静态全局区
};

int person::b = 10;//类中成员变量的定义


void text1()
{
	person p1;
	p1.b = 100;
	cout << p1.b << endl;
}


void text2()
{
	cout << person::b << endl;//通过类的作用域访问类的静态成员函数
	//cout << person::a << endl;

}

int main()
{
	text2();
	return 0;
}