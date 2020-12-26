#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <stdexcept>
#include <vector>
#include <deque>
#include <algorithm>
//函数的对象
using namespace std;

class Myadd
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};

void test1()
{
	Myadd p;
	cout << p(2, 3) << endl;
	cout << Myadd()(4, 5) << endl;
}

void print(int a)
{
	cout << a << endl;
}

class Print
{
public:
	void operator()(int a)
	{
		cout << a << endl;
	}
};

bool compare(int a, int b)
{
	return a > b;
}

class Compare
{
public:
	bool operator()(int a, int b)
	{
		return a > b;
	}
};

void test2()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(5);
	v.push_back(2);
	sort(v.begin(), v.end(),Compare());
	for_each(v.begin(), v.end(), Print());
}

int main()
{
	return 0;
}
