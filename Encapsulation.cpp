#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>

using namespace std;
//C++中对事物的封装 将属性和行为封装在一起
//类 将事物抽象成属性和行为，并且封装在一起
//struct Person
//结构体 中所有成员默认都是共有的 类中的所有成员是私有，可以修改
class Person
{
public:
	//类中的所有的成员 访问的权限都是私有的 private
	//属性
	int age;
	char name[128];
	//行为
	void person_eat()
	{
		printf("%s 吃饭\n", name);
	}
};

struct Dog
{
	int age;
	char name[128];

	void Dog_eat()
	{
		printf("%s 玩\n", name);
	}
};
void text1()
{
	//通过类，实例化一个变量，这个变量叫做对象
	Person p1;
	p1.age = 10;
	strcpy(p1.name,"shy");
	p1.person_eat();

	Dog p2;
	p2.age = 2;
	strcpy(p2.name, "旺财");
	p2.Dog_eat();

	
}
int main()
{
	text1();
	return 0;
}