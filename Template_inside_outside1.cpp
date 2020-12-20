#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
//类模板的外实现
//类模板的成员函数放在类外实现需要写成函数模板
using namespace std;

template <class T1, class T2>
class Person
{
public:
	Person(T1 a, T2 b);
	void show();
	T1 a;
	T2 b;
};

//类模板的成员函数在类外实现 需要写成函数模板
template <class T1,class T2>
Person<T1,T2>::Person(T1 a, T2 b)
{
	this->a = a;
	this->b = b;
}

template <class T1,class T2>
void Person<T1, T2>::show()
{
	cout << a << " " << b << endl;
}

void test1()
{
	Person<int, string> p(10, "shy");
	p.show();
}

int main()
{
	test1();
	return 0;
}