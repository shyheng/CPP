#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<string.h>
#include<stdlib.h>

using namespace std;

class person
{
public:
	person(){}
	person(int age1, const char* name1)
	{
		age = age1;
		name = new char[strlen(name1)+1];
		strcpy(name,name1);
	}

	person& operator=(person &p1)//this-..> p2
	{
		this->age = p1.age;
		this->name = new  char[strlen(p1.name)+1];
		strcpy(this->name, p1.name);
		return *this;
	}

	~person()
	{
		delete []name;
	}

	int age;
	char* name;
};


void text1()
{
	person p1(20, "shy");
	person p2;
	p1 = p2;//p2.operator=(p1)
	cout << p2.age << " " << p2.name << endl;
}


int main()
{
	text1();
	return 0;
}