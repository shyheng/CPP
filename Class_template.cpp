#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
//类模板
using namespace std;

template <class T1,class T2>

class Animal
{
public:
	Animal(T1 a, T2 b)
	{
		age = a;
		data = b;
	}
	T1 age;
	T2 data;
};



void test1()
{
	//模板类不能自动转换类型推导
	Animal<int,int> dog(10,10);
	Animal<int, string> cat(2, "li");
}

int main()
{

	return 0;
}