#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <stdexcept>
#include <vector>
#include <deque>
#include <algorithm>
//deque容器总结
using namespace std;

//deque的构造函数
void print(int a)
{
	cout << a << endl;
}
void test1()
{
	deque<int> d;
	d.push_back(1);
	d.push_back(2);
	d.push_back(3);
	deque<int> d1(d);
	deque<int> d2(d.begin(),d.end());
	deque<int> d3(10,8);
	for_each(d3.begin(), d3.end(), print);

}

//deque赋值操作
void test2()
{
	deque<int> d;
	d.push_back(1);
	d.push_back(2);
	d.push_back(3);
	deque<int> d1;
	d1.assign(d.begin(), d.end());//拷贝
	deque<int> d2;
	d2.assign(3,9);

	deque<int> d3;
	d3 = d2;

	d2.swap(d3);//2和3交换
	for_each(d3.begin(), d3.end(), print);
}

//deque大小操作
void test3()
{
	deque<int> d;
	d.push_back(1);
	d.push_back(2);
	d.push_back(3);
	cout << d.size() << endl;
	if (!d.empty())
		cout << "不为空" << endl;
	d.resize(2);
	d.resize(3,5);
	for_each(d.begin(), d.end(), print);
}

//deque双插入和删除操作
void test4()
{
	deque<int> d;
	d.push_back(1);
	d.push_back(2);
	d.push_back(3);
	d.push_front(4);//头插
	d.push_front(5);
	d.push_front(6);
	for_each(d.begin(), d.end(), print);
	d.pop_back();
	d.pop_front();
	for_each(d.begin(), d.end(), print);
}

//deque数据存取
void test5()
{
	deque<int> d;
	d.push_back(1);
	d.push_back(2);
	d.push_back(3);
	cout << d.at(2) << endl;
	d[2] = 10;
	cout << d.front() << endl;
	cout << d.back() << endl;
}

//deque插入操作
void test6()
{
	deque<int> d;
	d.push_back(1);
	d.push_back(2);
	d.push_back(3);
	//d.insert(d.begin()+1,10);
	d.insert(d.begin()+1,3,2);
	for_each(d.begin(), d.end(), print);
	deque<int> d1;
	d1.insert(d1.begin(), d.begin(), d.end());
}

//deque删除操作
void test7()
{
	deque<int> d;
	d.push_back(1);
	d.push_back(2);
	d.push_back(3);
	//d.clear();
	d.erase(d.begin() + 1,d.end());
	d.erase(d.begin()+1);
	for_each(d.begin(), d.end(), print);
}


int main()
{
	test1();
	return 0;
}