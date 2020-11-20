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

//C语言中const修饰的变量保存在栈区
void text5()
{
	const int a = 10;
	//a= 100;
	int* p = &a;
	*p = 100;
	printf("%d\n", a);
	//如果在全局变量，修改不了常量
	
}
void text6()
{
	extern const int num;
	printf("%d\n", num);
}



int main()
{
	//text4();
	//text6();
	return 0;
}