#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<string.h>
#include<stdlib.h>

using namespace std;

class person
{
public:
	person()
	{
		cout << "无参构造" << endl;
	}

	person(int a)
	{
		age = a;
	}

	~person()
	{
		cout << "析构" << endl;
	}
	int age;
};


void text1()
{
	int* p = new int;//申请一块内存 sizeof（int）大小 并且对这块空间进行初始化
	cout << *p << endl;
	*p = 100;
	cout << *p << endl;
	delete p;//释放申请空间

}
void text2()
{
	person *p = new person;//sizeof(person)
	delete p;
}


//申请一个数组
void text3()
{
	//new一个数组时，返回的是该数组的首元素的地址
	int* p = new int[10];
	for (int i = 0; i < 10; i++)
	{
		p[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;
	delete []p;
}

void text4()
{
	//new调用有参构造
	person *p = new person(10);
	delete p;
	person* p1 =new person[10];//注意new对象的数组时不能调用有参构造 只能调用无参
	delete []p1;

}

void text5()
{
	void* p = new person;
	delete p; //p的类型是void * 所有不会调用析构函数 
}

int main()
{
	text5();
	return 0;
}