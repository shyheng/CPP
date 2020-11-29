#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<string.h>
#include<stdlib.h>

using namespace std;

class person
{
public:
	int a;//普通成员变量
	static int b;//静态成员不存在类中
	void show()
	{
		cout << a << " " << b << endl;
	}
	static void show1()//静态成员函数 不存在类实例化对象
	{
		cout << b << endl;
	}
};

int person::b = 1;

void text1()
{
	person p;
	//空类的大小不是0 而是1
	cout << sizeof(person) << endl;
}

int main()
{
	text1();
	return 0;
}
