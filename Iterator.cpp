#define _CRT_SECURE_NO_WARNINGS
#include <stdexcept>
#include <vector>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <iostream>
//迭代器
using namespace std;

void print(int a)
{
	cout << a << endl;
}

void test1()
{
	vector<int> v;//动态数组
	v.push_back(2);//尾插
	v.push_back(4);
	v.push_back(5);
	v.push_back(3);
	//如果需要访问容器的元素 需要拿到容器首元素的迭代器（指针）
	vector<int>::iterator it_start = v.begin();
	vector<int>::iterator it_end = v.end();
	//for (; it_start != it_end; it_start++)
	//{
	//	cout << *it_start << " ";
	//}
	//cout << endl;
	for_each(it_start, it_end,print);
}

int main()
{
	test1();
	return 0;
}