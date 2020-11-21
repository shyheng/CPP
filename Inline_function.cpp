#include<iostream>
using namespace std;
#define MYADD(a,b) a+b

//内联函数

inline int add(int a, int b)
{
	return a +b;

}
void text1()
{
	int a = 10;
	int b = 20;
	//int c = MYADD(a, b)*5;//a + b * 5 110 替换发生在预处理阶段
	int c = add(a, b) * 5;//150   替换发生在编译阶段 inline和宏函数一样不会有函数的调用的开销
	cout << c << endl;
}


//宏函数缺陷
#define MYCOMPARE(a,b) a<b?a:b

inline int mycompare(int a, int b)
{
	return a < b ? a : b;
}

void text2()
{
	int a = 1;
	int b = 5;
	//int c = MYCOMPARE(++a, b);//++a<b?++a:b 3
	int c = mycompare(++a, b);//2
	cout << c << endl;
}


//默认参数
//设置默认参数时，有一个参数设置了默认参数，从这个参数往后的每一个参数都要设置默认参数

void f(int a = 1, int b = 1)
{
	cout << a << " " << b << endl;
}


//占位参数
void f1(int a, int=4)
{

}
void text3()
{
	f1(1, 2);
	f1(1);
}

int main()
{
	text3();
	return 0;
}


