#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
//虚析构
using namespace std;

class Animal
{
public:
	virtual void speak()//虚函数
	{
		cout << "动物在说话" << endl;
	}
};

class Dog :public Animal
{
public:
	//重写
	void speak()
	{
		cout << "狗在说话" << endl;
	}
	virtual ~Dog() = 0;//虚析构 作用 在调用类的析构函数之前，会先调用子类的虚析构
	//{//纯虚析构函数
	//	cout << "Animal的虚析构" << endl;
	//}
};

void do_work(Animal& obj)
{
	obj.speak();
}

void test1()
{
	Animal* p = new Dog;
	p->speak();
	delete p;
}

int main()
{
	test1();
	return 0;
}