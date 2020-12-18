#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
//普通函数和模板函数的区别
using namespace std;

int Myadd(int a, int b)
{
	cout << "普通函数" << endl;
	return a + b;
}

template<class T>
T Myadd(T a, T b)
{
	cout << "模板函数" << endl;
	return a + b;
}

void test1()
{
	int a = 10;
	char b = 20;
	Myadd(a, a);//调用普通函数 不用推导
	Myadd<>(a, a);//指定调用模板函数
	Myadd<int>(a, a);//指定调用模板函数
	Myadd(a, b);//调用普通函数 因为普通的函数可以自动类型转换
	//Myadd<>(a, b);//函数模板不会做自动类型转换
}

int main()
{

	return 0;
}