#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
//普通函数和模板函数的共同使用
using namespace std;
//C++编译器优先考虑普通函数
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
	char a = 10;
	char b = 20;
	Myadd(a, b);//模板函数
}

int main()
{
	return 0;
}