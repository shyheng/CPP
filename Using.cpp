#include<iostream>
using namespace std;


namespace A
{
	int a = 10;
	void f()
	{
		cout << "shy" << endl;
	}
}

void text()
{
	//注意 当using声明的标识符和其他标识符有其他作用域的冲突时，会产生二义性
	//int a = 100;
	using A::a;
	using A::f;
	cout << a << endl;
	cout << a << endl;
	cout << a << endl;
	f();
}

void text1()
{
	A::a = 100;
	//using 编译指令使整个命名空间标识符可用

	using namespace A;
	cout << a << endl;
	f();
}
int main()
{
	text1();
	return 0;
}