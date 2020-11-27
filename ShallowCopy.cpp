#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
#include<string>
//浅拷贝
using namespace std;

class Person
{
public:
	Person(int age,const char* str)
	{
		cout << "有参构造" << endl;
		mAge = age;
		name = (char*)malloc(strlen(str) + 1);
		strcpy(name, str);
	}
	void show()
	{
		cout << name << " " << mAge << endl;
	}
	~Person()
	{
		if (name != NULL)
		{
			free(name);
			name = NULL;
		}
		cout << "析构" << endl;
	}

	int mAge;
	char* name;
};


void text1()
{
	Person p(20,"shy");
	p.show();
	Person p1(p);//调用拷贝构造 函数
	p1.show();
}

int main()
{
	text1();
	return 0;
}