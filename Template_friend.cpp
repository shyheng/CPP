#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
//类模板碰到友元函数
using namespace std;

template <class T1,class T2>
class Person;

template <class T1,class T2>
void showPerson1(Person<T1, T2>& p);

//类模板作为函数形参 函数需要学成 函数模板
template <class T1,class T2>
void showPerson(Person<T1,T2> &p)
{
	cout << p.a << " " << p.b << endl;
}

template <class T1,class T2>
class Person
{
	friend void showPerson<>(Person<T1, T2> &p);
	friend void showPerson1<>(Person<T1, T2>& p);
	friend void showPerson2(Person<T1, T2>& p)//定义一个全局函数并声明为类的友元
	{
		cout << p.a << " " << p.b << endl;
	}
public:
	Person(T1 a, T2 b)
	{
		this->a = a;
		this->b = b;
	}
private:
	T1 a;
	T2 b;
};

template <class T1, class T2>
void showPerson1(Person<T1, T2>& p)
{
	cout << p.a << " " << p.b << endl;
}

void test1()
{
	Person<int, string> p(10, "lucy");
	showPerson(p);
	showPerson1(p);
	showPerson2(p);
}

int main()
{
	test1();
	return 0;
}