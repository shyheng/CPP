#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <stdexcept>
#include <vector>
#include <algorithm>
//迭代器指向的是一个容器
using namespace std;

void test1()
{
	vector<vector<int>> v;
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	for (int i = 0; i < 3; i++)
	{
		v1.push_back(i);
		v2.push_back(i+10);
		v3.push_back(i + 100);
	}
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	vector<vector<int>>::iterator it = v.begin();
	for (; it != v.end(); it++)
	{
		//*it 得到的是vector<int>
		vector<int>::iterator it1 = (*it).begin();
		for (; it1 != (*it).end(); it1++)
		{
			cout << *it1 << endl;
		}
	}
}

int main()
{
	test1();
	return 0;
}