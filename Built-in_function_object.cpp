#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <stdexcept>
#include <vector>
#include <deque>
#include <algorithm>
#include <functional>

//内建函数对象
using namespace std;

void test1()
{
	negate<int> p;//取反数
	cout << p(5) << endl;//-5
	cout << negate<int>()(2) << endl;
}

void test2()
{
	cout << plus<int>()(2, 3) << endl;
}

class Print
{
public:
	void operator()(int a)
	{
		cout << a << endl;
	}
};


void test3()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(5);
	v.push_back(2);
	//sort(v.begin(), v.end(),greater<int>());
	sort(v.begin(), v.end(),less<int>());
	for_each(v.begin(), v.end(),Print() );
}

int main()
{
	test1();
	return 0;
}