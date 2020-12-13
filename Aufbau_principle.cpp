#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include<stdlib.h>
#include <string>
//对象构造和析构的调用原理
using namespace std;

class Base
{
public:
	Base(int age, string name)
	{
		this->age = age;
		this->name = name;
		cout << "Base的构造函数" << endl;
	}
	~Base()
	{
		cout << "Base析构" << endl;
	}
	int age;
	string name;
};

//创建子类对象时，必须先构建父类  需要调用父类的构造函数
class Son :public Base
{
public:
	Son(int Id,int age,string name):Base(age,name)
	{
		this->Id = Id;
		cout << "Son的构造函数" << endl;
	}
	~Son()
	{
		cout << "son析构" << endl;
	}
	int Id;
};

void test1()
{
	Son p(10, 18, "luy");
}

int main()
{
	test1();
	return 0;
}