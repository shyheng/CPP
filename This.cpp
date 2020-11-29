#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<string.h>
#include<stdlib.h>

using namespace std;

class person
{
public:
	person(int age, string name)
	{
		this->age = age;
		this->name = name;
	}
	void show()
	{
		cout << age << " " << name << endl;
	}
	//常函数 不能通过this指针修改this指针指向的对象内容
	//常量指针常量const person * const this ->p1
	person person_add(person& p2)const//person * const this ->p1常量指针
	{
		// this ->age = 200;
		person p(this->age + p2.age, this->name + p2.name);
		return p;
	}
	int age;
	string name;
};

person person_add(person &p1,person &p2)
{
	person p(p1.age + p2.age, p1.name + p2.name);
	return p;
}

void text2()
{
	person p1(10,"shy");
	person p2(20,"zph");
	
	//person p3 = person_add(p1, p2);
	//p3.show();

	person p3 = p1.person_add(p2);
	p3.show();
}

void text1()
{
	person p(10, "s");
	p.show();
}

int main()
{
	text2();
	return 0;
}