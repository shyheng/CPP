#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<string.h>
#include<stdlib.h>

using namespace std;

//基类
class Animal
{
public:
	int age;
	void print()
	{
		cout << age << endl;
	}
};

class Dog :public Animal
{
public:
	int tail_len;
	//int age;
	//void print()
	//{
	//	cout << age << endl;
	//}

};

void text1()
{
	Dog d;
	d.print();
}

int mian()
{
	text1();
	return 0;
}