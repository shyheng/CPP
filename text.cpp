#include<iostream>
#include<stdlib.h>
using namespace std;
//全局变量
int a;//定义
extern int a;//声明
extern int a;//声明

//void f(x, y)//形参没有类型
//{
//	//return 100;
//}

void text()
{
	//f(1);
	//f(1, 2);
	//f(1, 112, 2);
}

void text1()
{
	char* p = (char*)malloc(100);
}

struct shy
{
	int a;
	int b;
};
void text2()
{
	shy obj;

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
	printf("%d\n", a < b ? a : b);
    //C++中三目运算符是一个变量
	(a < b ? a : b) = 100;
}


int main()
{

	return 0;
}