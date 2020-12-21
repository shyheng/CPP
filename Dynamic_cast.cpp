#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
//动态转换 dynamic_cast
using namespace std;

class A
{
public:
	int a;
};

class B :public A
{
public:
	int b;
};

void test1()
{
	//动态转换不能转内置的基本数据类型
	int a = 1;
	int b = 2;
	//a = dynamic_cast<int>(b);
}

void test2()
{
	A* p1 = new A;
	B* p2 = new B;
	//dynamic_cast不能用于没有发生继承关系之间的类型转换
	//dynamic_cast可以用于发生继承关系之间的类型转换
	p1 = dynamic_cast<A*>(p2);//子转父类 安全
	//p2 = dynamic_cast<B*>(p1);//父转子 不安全 不允许
}

int main()
{
	return 0;
}