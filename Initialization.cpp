
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
#include<string>

using namespace std;

//初始化列表
class person
{
public:
	//先定义了 m_a ，m_b，m_c 然后分别赋值
	/*person(int a,int b ,int c)
	{
		m_a = a;
		m_b = b;
		m_c = c;
	}*/
	//先声明，在根据顺序进行定义初始化
	//调用构造函数 定义并初始化，顺序和声明的顺序一致
	person(int a, int b, int c) :m_a(a), m_b(b), m_c(c){}//int a = a；
	void show()
	{
		cout << m_a << " " << m_b << " " << m_c << endl;
	}

	int m_a;
	int m_b;
	int m_c;
};


void text1()
{
	person p1(1, 5, 3);
	p1.show();
}
int main()
{
	text1();
	return 0;
}