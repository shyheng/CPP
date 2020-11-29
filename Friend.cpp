#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
#include<string>
#include<stdlib.h>

using namespace std;

class Building
{
	friend void print_Building(Building& b);
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

void print_Building(Building &b)
{
	cout << b.hall << " " << b.bedroom << endl;
}

void text1()
{
	Building b1("家","房间");
	print_Building(b1);
}
int main()
{

	return 0;
}