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

void text5()
{
	//C++中修饰的局部变量存在符号表中
	const int a = 10;
	//a = 100;
	//对const修饰的局部变量取地址 编译器会产生一个临时变量保存在a的地址
	//int tmp = a;
	int* p = (int *)&a;
	*p = 100;
	cout << a << endl;
}

const int b = 1;
void text6()
{
	//const修饰的全局变量存在常量
	int* p = (int*)&b;
	*p = 100;//错误
	cout << b << endl;
}

void text7()
{
	//关不了
	//extern const int num;
	//cout << num << endl;
}

//内存分配
struct stu
{
	int a;
	int b;
};
void text8()
{
	const struct stu obj = { 1,2 };
	struct stu* p = (struct stu*)&obj;
	p->a = 3;
	p->b = 4;
	cout << obj.a << "" << obj.b << endl;
}
int main()
{
	text8();
	return 0;
}