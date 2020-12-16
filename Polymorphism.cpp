#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
//多态
/*
* 发生多态的条件
* 1 父类中有虚函数
* 2 必须发生继承
* 3 子类必须重写
* 4 父类的指针域引用指向子类的对象
*/
using namespace std;

class Animal
{
public:
	virtual void speak()//虚函数
	{
		cout << "动物在说话" << endl;
	}
};

class Dog:public Animal
{
public:
	//重写
	void speak()
	{
		cout << "狗在说话" << endl;
	}
};

class Cat :public Animal
{
public:
	void speak()
	{
		cout << "猫在说话" << endl;
	}
};

//如果两个类发生了继承  父类和子类编译器会自动转换
void do_work(Animal &obj)
{
	obj.speak();
}

void test()
{
	Animal p;
	do_work(p);

	Dog p1;
	do_work(p1);

	Cat p2;
	do_work(p2);
}

int main()
{
	test();
	return 0;
}