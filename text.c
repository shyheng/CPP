#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//全局变量
int a;//定义
int a;//声明
int a;//声明

void f(x,y)
{
	return 100;
}

void text()
{
	f(1);
	f(1,2);
	f(1, 112, 2);
}


void text1()
{
	char* p = malloc(100);
}

struct shy
{
	int a;
	int b;
};
void text2()
{
	struct shy obj;
	
}


void text3()
	//bool类型的变量只有两个值 true
{

	bool f = true;
}


//三目运算符
void text4()
{
	int a = 10;
	int b = 20;
	printf("%d\n", a < b? a : b);
	//C中三目运算符是一个常量
	//(a < b ? a : b) = 100;
	*(a < b ? &a : &b) = 100;
}
int main()
{
	//text4();
	return 0;
}