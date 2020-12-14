#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
//多继承
using namespace std;

class A
{
public:
	int a;
};

class B
{
public:
	int b;
};

class C :public A, public B
{
public:
	int c;
};


void test()
{
	C p;
	p.A::a = 10;
	p.B::b = 20;
	//p.b = 20;
	p.c = 30;
}

int main()
{
	test();
	return 0;
}