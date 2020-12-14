#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
//菱形继承和虚继承     

using namespace std;

class animal
{
public:
	int age;
};

class sheep :public animal
{
public:
	int id;
};

class camel :public animal
{
public:
	int camel_num;
};

class Shenshou :public sheep, public camel
{
public :
	int a;
};

void test()
{
	Shenshou p;
	p.sheep::age = 100;
	//p.age = 10;
}

int main()
{
	test();
	return 0;
}

