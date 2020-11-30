#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<string.h>
#include<stdlib.h>
//智能指针
using namespace std;

class person
{
public:
	person(int age)
	{
		this->age = age;
	}
	int age;
};

class Smartpointer
{
public:
	Smartpointer(person *p1)
	{
		this->p = p1;
	}
	~Smartpointer()
	{
		delete p;
		cout << "释放p" << endl;
		
	}

	person* operator->()
	{
		return p;
	}

	person operator*()
	{
		return *p;
	}

	person* p;
};

void text1()
{
	//局部对象 可以帮助p释放
	person *p= new person(120);
	Smartpointer sp(p); 
	cout << p->age << endl;
	//忘记释放p指向申请对象
	
	// sp -> 返回的是p sp.operator->()
	cout << sp->age << endl;

	//sp.oprator*()
	cout << (*sp).age << endl;

}
int main()
{
	text1();
	return 0;
}
