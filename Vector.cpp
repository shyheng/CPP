#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <stdexcept>
#include <vector>
#include <algorithm>
//vector
using namespace std;

//vector迭代器
void test1()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	//vector<int>::iterator it_begin = v.begin();
	//vector<int>::iterator it_end = v.end();
	vector<int>::reverse_iterator it_begin = v.rbegin();
	vector<int>::reverse_iterator it_end = v.rend();
	for (; it_begin != it_end; it_begin++)
	{
		cout << *it_begin << " ";
	}
	cout << endl;
}

//空间配置
void test2()
{
	vector<int> v;
	for (int i = 0; i < 1000; i++)
	{
		v.push_back(i);
		cout << v.capacity() << endl;
	}
}

//vector的构造函数
void print_vector(int a)
{
	cout << a << endl;
}
void test3()
{
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	//vector<int> v2(v1);
	//vector<int> v2(v1.begin(), v1.end());
	vector<int> v2(v1.begin()+1,v1.end());
	for_each(v2.begin(), v2.end(), print_vector);
}

//常用的赋值操作
void test4()
{
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	vector<int> v2;
	v2.push_back(5);
	v2.push_back(6);
	v2.push_back(7);
	v2.push_back(8);
	//v2.assign(v1.begin(), v1.end());
	//v2.assign(10,5);
	//v2 = v1;
	v2.swap(v1);
	for_each(v2.begin(), v2.end(), print_vector);
}

int main()
{
	test2 ();
	return 0;
}