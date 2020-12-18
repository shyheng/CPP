#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
//c++函数模板
using namespace std;

void swap(int &x,int &y)
{
	int temp = x;
	x = y;
	y = temp;
}

void swap(char& x, char& y)
{
	char temp = x;
	x = y;
	y = temp;
}

void test1()
{
	int a = 1;
	int b = 2;
	swap(a,b);
	cout << a << "  " << b << endl;
}

void test2()
{
	char a = 1;
	char b = 2;
	swap(a, b);
	cout << a << "  " << b << endl;
}



//函数模板来实现
template <class T>//定义第一个模板类 模板的通用类型为T
//紧跟函数的定义
void swap_temp(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

void text3()
{
	char a = 1;
	char b = 2;
	int c = 3;
	int d = 4;
	swap_temp(a, b);//自动推导  
	//swap_temp(a, c); 自动类型推导的结果不一致
	swap_temp(c, d);
	cout << a << " " << b << endl;
}


int main()
{
	test1();
	return 0;
}