#include<iostream>
#include<string>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

class Person
{
public:
	//有参和无参
	Person()
	{
		cout << "无参构造" << endl;
	}
	Person(int a, string n)
	{
		cout << "有参构造" << endl;
		age = a;
		name = n;
	}
	//拷贝构造的调用时机：旧对象初始化新对象
	//如果自定义一个拷贝构造，那么系统不再默认的拷贝构造
	//explicit 关键字 不能通过隐式法调用构造函数
	Person(const Person &p)//Person p = p2
	{
		//拷贝构造做了简单拷贝
		age = p.age;
		name = p.name;
		cout << "拷贝构造" << endl;
	}

	~Person()
	{
		cout << "析构" << endl;
	}

	int age;
	string name;
};

void text1()
{
	//如果人为提供了一个有参构造，系统将不再提供默认的无参构造
	Person p1;//调用无参构造  不能使用括号法
	Person p2(20, "shy");//调用有参
	Person p3(p2);//调整系统提供的默认拷贝构造
	cout << p3.age << p3.name << endl;
}

//匿名对象
void text2()
{
	//匿名对象，没有名字 生命周期在当前行
	Person(20, "shy");//调用了有参构造创建一个匿名对象
	Person();
	Person p1(22,"zph");
	//Person (p1);//在定义时匿名对象不能使用括号法调用拷贝构造



}

//显示法调用构造函数
void text3()
{
	Person p1 = Person(20, "my");//显示法调用有参构造
	Person p2 = Person(p1);//显示法调用拷贝构造
	Person p3 = Person();//显示法调用无参构造
}

//隐式法调用构造函数
void text4()
{
	Person p1 = { 10,"jy" };//隐式法调用有参构造
	Person p2 = p1;//隐式法调用拷贝构造
	//Person p3;//显示法调用无参构造
}

int main()
{
	text3();
	return 0;
}