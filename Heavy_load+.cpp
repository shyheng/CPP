#include<iostream>
#include<string>
#include<string.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

class person
{
public:

	person(int age)
	{
		this->age = age;
	}
	person operator+(person& p2)
	{
		person p(this->age + p2.age);
		return p;
	}
	int age;
};

//person operator+(person& p1, person& p2)
//{
//	person p(p1.age + p2.age);
//	return p;
//}

void text1()
{
	person p(10);
	person p1(20);
	person p3 = p + p1;//operator+(p1,p2 ) p1.operator+(p2)
	cout << p3.age << endl;
}

int main()
{
	text1();
	return 0;
}