#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<string.h>

using namespace std;


class Building;

class Goodgay
{
public:
	Goodgay(string hall, string bedroom);
	void visit();
	Building *b;
};

class Building
{
	//friend void print_Building(Building& b);
	//friend class Goodgay;//一个类成为另一个类的友元
	friend void Goodgay::visit();//类的成员函数成为另一个类的友元
public:
	Building(string hall, string bedroom)
	{
		this->bedroom = bedroom;
		this->hall = hall;
	}
	string hall;
private:
	string bedroom;
};

Goodgay::Goodgay(string hall, string bedroom)
{
	b = new Building(hall,bedroom);
}

void Goodgay::visit()
{
	cout << b->hall << " " << b->bedroom << endl;
}

void text1()
{
	Goodgay gd("家", "房间");
	gd.visit();
}

int main()
{
	text1();
	return 0;
}