#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<string.h>
#include<stdlib.h>

using namespace std;
//函数对象
class Myadd
{
public:
	int add(int a,int b)
	{
		return a + b;
	}
	int operator()(int x, int y)
	{
		return x + y;
	}
};

void text1()
{
	//Myadd p;
	//cout << p.add(3, 5) << endl;
	//p() 可以像函数一样调用的对象 函数对象
	//cout << p(3, 5) << endl;//p.operator()(3,4)
	cout << Myadd()(3, 5) << endl;//匿名对象Myadd().operator(3,5)
}

int main()
{
	text1();
	return 0;
}