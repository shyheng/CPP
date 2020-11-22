#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;

//c语言中 不能存放函数
struct _stu 
{
	int a;
	int b[5];
};
//c++ 可以存放函数
struct _stul
{
	int a;
	int b[5];
	void print_s()
	{
		cout << a << endl;
	}
};
struct student
{
	int age;
	int id;
	char name[256];
	//操作属性叫做 方法或行为函数
	void print()
	{
		cout << age << id << name << endl;
	}
};

void text1()
{
	student obj;
	obj.age =11;
	obj.id=312;
	strcpy(obj.name, "lucy");
	obj.print();
}

int main()
{
	text1();
	return 0;
}