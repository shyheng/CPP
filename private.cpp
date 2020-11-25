#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>

using namespace std;
//尽量设置成员变量为私有 对变量的设置的控制  可以给变量设置读写权限 
class Person
{
	//接口思想
public:
	void set_age(int age1)
	{
		if (age1 >= 0 && age1 <= 150)
			age = age1;
	}

	void set_name(char *name1)
	{
		if(name != NULL )
		strcpy(name, name1);
	}
private:
	int age;
	char* name;
};
void text01()
{
	//将成员变量设置共有 类外可以随时无法控制改变成员变量
	//Person p1;
	//p1.age = 200;
	//p1.name = (char *)malloc(128);
	//strcpy(p1.name,"shy");
	//p1.name = NULL;
}

int main()
{

	return 0;
}