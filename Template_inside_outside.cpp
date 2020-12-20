#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
//内模板实现
using namespace std;

template <class T1,class T2>
class Person
{
public:
	Person(T1 a, T2 b)
	{
		this->a = a;
		this->b = b;
	}
	void show()
	{
		cout << a << " " << b << endl;
	}
	T1 a;
	T2 b;
};

void test1()
{
	Person<int,string> p(10, "shy");
	p.show();
}

int main()
{
	return 0;
}