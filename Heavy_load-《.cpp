#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<string.h>

using namespace std;

class person
{
	friend ostream& operator<<(ostream& cout, person& p);
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
private:
	int age;
};

ostream& operator<<(ostream& cout, person& p)
{
	cout << p.age;
	return cout;
}

void text1()
{
	person p1(10);
	cout << p1<<endl;
	// operator<<(cout,p1)  cout .operator<<(p1)
}
int main()
{
	text1();
	return 0;
}