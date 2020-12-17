#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>

using namespace std;

//开发时 对源码的修改是关闭的 对扩展是开发的 
//多态实现计算器案例
class Mycalc
{
public:
	int calc(int a, int b, string cmd)
	{
		if (cmd == "+")
		{
			return a + b;
		}
		else if (cmd == "-")
		{
			return a - b;
		}
		else if (cmd == "*")
		{
			return a * b;
		}
	}
};

void test1()
{
	Mycalc p;
	cout << p.calc(3, 4, "+") << endl;
}

//多态实现计算器案例
class Calc
{
public:
	virtual int myclac(int a, int b) = 0;//虚函数等于0 纯虚函数
	/*{
		return 0;
	}*/
};

class Mod :public Calc
{
	//子类继承了抽象类，那么子类也是一个抽象类
	int myclac(int a,int b){}//如果子类重写类虚函数 就不是抽象类
};

//如果有纯虚函数的类 叫做抽象类 抽象类不能实例化对象
void test3()
{
	//Calc p;
	//Mod p1;
}


class Add :public Calc
{
public:
	int myclac(int a, int b)
	{
		return a + b;
	}
};

class Sub :public Calc
{
public:
	int myclac(int a, int b)
	{
		return a - b;
	}
};

int do_calc(int a, int b, Calc& obj)
{
	return obj.myclac(a, b);
}

void test2()
{
	Add p;
	Sub p1;
	cout << do_calc(2, 3, p) << endl;
	cout << do_calc(2, 3, p1) << endl;
}

int main()
{
	test2();
	return 0;
}