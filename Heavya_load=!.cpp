#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<string.h>
#include<stdlib.h>

using namespace std;

class person
{
public:
	person(int age,string name)
	{
		this->age = age;
		this->name = name;
	}
	bool operator==(person &p2)//this->>>p1
	{
		return this->age == p2.age && this->name == p2.name;
	}
	bool operator!=(person& p2)//this->>>p1
	{
		return this->age != p2.age || this->name != p2.name;
	}
	int age;
	string name;

};

void text1()
{
	person p1(12, "cs");
	person p2(12, "cv");
	if (p1 == p2)//p1.operator==(p2)
	{
		cout << "p1 == p2" << endl;
	}
	if (p1 != p2)//p1.operator!=(p2)
	{
		cout << "p1 != p2" << endl;
	}
}

int main()
{
	text1();
	return 0;
}