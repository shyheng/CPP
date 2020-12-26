#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <stdexcept>
#include <vector>
#include <deque>
#include <algorithm>
//谓词 bool类型 仿函数
using namespace std;

class Print
{
public:
	void operator()(int a)
	{
		cout << a << endl;
	}
};

bool greater3(int a)
{
	return a > 2;
}

void test1()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(5);
	v.push_back(2);
	vector<int>::iterator it = find_if(v.begin(), v.end(), greater3);
	if (it != v.end())
	{
		cout << *it << endl;
	}
	for_each(v.begin(), v.end(), Print());
}

int main()
{
	test1();
	return 0;
}