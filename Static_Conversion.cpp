#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
//静态转换
using namespace std;

void test1()
{
	//static_cast 用来转换内置的数据类型 
	//和C语言的强制类型一样
	int a = 1;
	char b = 2;
	double c = 3.14;
	a = static_cast<int>(b);
	a = static_cast<int>(c);
	c = static_cast<double>(a);
}
class A
{
public:
	int a;
};
class B:public A
{
public:
	int b;
};

void test2()
{
	A* p1 = new A;
	B* p2 = new B;
	//static_cast不能装换没有发生继承关系的类
	//如果两个类之间发生了继承关系，可以类型转换 但是static_cast不会保证转换的安全性
	p1 = static_cast<A*>(p2);//子转父 向上转换 是安全的
	p2 = static_cast<B*>(p1);//父转子 向下转换 是不安全的

}

void test3()
{
	int* p1 = NULL;
	char* p2 = NULL;
	//static_cast 不能用来传指针
	//p1 = static_cast<int*>(p2);
}

int main()
{
	return 0;
}