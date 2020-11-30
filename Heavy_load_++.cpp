#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Myint
{
public:
	Myint(int num)
	{
		this->num = num;
	}
	Myint& operator++()
	{
		this->num = this->num + 1;
		return *this;
	}
	Myint operator++(int)
	{
		Myint tmp = *this;
		//加加
		this->num = this->num + 1;
		return tmp;
	}
	int num;
};

ostream& operator<<(ostream& cuot, Myint& p)
{
	cout << p.num;
	return cout;
}
void text1()
{
	Myint p1(10);
	cout << p1 << endl;
	++p1;//operator++(p1) p1.operator++()
	cout << ++p1 << endl;
	cout << p1++ << endl; //p1.operator++(int)
}
int main()
{
	text1();
	return 0;
}