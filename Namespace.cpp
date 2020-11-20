#include<iostream>
using namespace std;

//命名空间的定义 必须定义在全局范围内
//命名空间下可以存放 变量 函数 结构体 类
//命名空间可以重命名,重命名空间相当于做合并操作

namespace A 
{
		int a = 10;
		void fun()
		{
			cout << "shy" << endl;
		}
		struct std
		{};
		class obj
		{};
		void f(int agr);
}

void A::f(int agr)
{
	cout << agr << endl;
}

	namespace B
{
	int a = 10;
	int b = 20;
}
	namespace B
	{
		int c = 10;
	}

	namespace C
	{
		int a = 10;
		int b = 20;
		namespace D
		{
			int a = 100;
		}
	}
	//注意：如果命名空间没有这个名字 name这个命名空间内所有的成员
	//都被编译器加上了static修饰 只能当前文件调节 这个属性连接属性

	namespace {
		int a = 10;
		void func() {
			cout << "shy" << endl;
		}
	}

	namespace S = B;
void text()
{
	cout << A::a << endl;
	cout << B::a << endl;
	cout << B::b << endl;
	A::fun();
	cout << B::c << endl;
}

void text1()
{
	cout << C::a << endl;
	cout << C::D::a << endl;
}

void text2()
{
	A::f(1);
	S::a;
}

int main()
{
	text2();
	return 0;
}