#include<iostream>
using namespace std;
//指针常量
void text1()
{
	int a = 10;
	int& b = a;//编译器优化 int*const b = &a
	//指针常量 不能改变指针变量的指向
	// b= 0x100;
	b = 1000;//*b = 1000;                 
}

void fun(int *&p)//int *&q = p ==> 编译器 int * const q = &p
{

}
void text2()
{
	int* p = NULL;
	fun(p);
}




/*
* 指针的引用
* 套用公式
* type &q = p
* type为指针类型
*/
void fun(int * &q)//int * &q = p
{

}

void text()
{
	int* p = NULL;
	fun(p);
}

int main()
{
	

	return 0;
}