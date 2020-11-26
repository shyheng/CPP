#include<iostream>
#include<string.h>
#include<string>
#define _CRT_SECURE_NO_WARNINGS
//构造函数
using namespace std;

class Preson
{
public:
	//构造函数 1 函数名和类名一致 没有返回值 不能写void 可以返回值 可以发生函数重载
	Preson(int age, string name)
	{
		m_age = age;
		m_name = name;
	}
	//析构函数 函数名前面加上~ 没有返回值 不可以有参数 不能发生函数重载
	~Preson()
	{
		cout << "析构函数" << endl;
	}
	int m_age;
	string m_name;
};

void text1()
{
	Preson p1(10, "shy");//构造函数是在实例化对象时创建，就是在内存开辟是就会被调用 
//销毁之前 自动调用析构函数 
}

int main()
{
	text1();
	return 0;
}