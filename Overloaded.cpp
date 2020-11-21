#include<iostream>
using namespace std;



void fun(double a,int b)
{
	cout << "double,int" << endl;
}

void fun(int a,double b)
{
	cout << "int,double" << endl;
}


//参数的类型不一样可以发生函数的重载
void fun(double a)
{
	cout << "double" << endl;
}

void fun(int a)
{
	cout << "int" << endl;
}

//返回值不能作为函数重载的条件、
//int fun(int a)
//{
//	cout << "int" << endl;
//	return 0;
//}

//默认参数不作为函数重载的条件
//函数名一样 意义不一样
//函数的重载发送必须在同一个作用域
void fun(int a,int b)
{
	cout << "int, int " << endl;
}

void text1()
{
	fun(1);
	fun(1, 2);
	fun(3.14);
	fun(3.14, 1);
	fun(1,3.14);
} 

int main()
{
	text1();
	return 0;
}