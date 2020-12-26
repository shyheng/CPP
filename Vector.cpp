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

//vector大小操作
void test5()
{
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	cout << v1.size() << endl;
	cout << v1.capacity() << endl;
	v1.resize(10,6);
	if (!v1.empty())
	{
		cout << "不为空" << endl;
	}
	for_each(v1.begin(),v1.end(),print_vector);

	vector<int> v2;
	v2.reserve(1000);//设置容量
	cout << v2.size() << endl;
	cout << v2.capacity() << endl;
}

//vector数据存取
void test6()
{
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	cout << v1.at(2) << endl;
	cout << v1[2] << endl;
	cout << v1.front() << endl;
	cout << v1.back() << endl;
}

//vector插入和删除操作
void test7()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	//v.insert(v.begin()+2,3,9);//第三个前面加入了3个9
	//v.pop_back();//删除最后一个
	//v.erase(v.begin()-3,v.end());
	//v.erase(v.begin()+3);
	v.clear();
	for_each(v.begin(),v.end(),print_vector);
}

//swp收缩空间
void test8()
{
	vector<int> v;
	for (int i = 0; i < 1000; i++)
	{
		v.push_back(1);
	}
	cout << v.size() << " " << v.capacity() << endl;
	v.reserve(10);
	cout << v.size() << " " << v.capacity() << endl;
	vector<int>(v).swap(v);
	cout << v.size() << " " << v.capacity() << endl;
}

//计算重新开辟了多少空间
void test9()
{
	vector<int> v;
	int* p = NULL;
	int count = 0;
	for (int i = 0; i < 10000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			count++;
			p = &v[0];
		}
	}
}

//vector容器排序
bool compare(int a, int b)
{
	return a > b;
}
void test10()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(5);
	v.push_back(3);
	v.push_back(2);
	v.push_back(4);
	//sort(v.begin(), v.end());//默认是从小到大
	sort(v.begin(),v.end(),compare);//从大到小
	for_each(v.begin(), v.end(), print_vector);
}

class Person
{
public:
	Person(int age,string s)
	{
		this->age = age;
		this->name = s;
	}
	int age;
	string name;
};

void print_person(Person &p)
{
	cout << p.age << " " << p.name << endl;
}
bool compare_person(Person& p1, Person& p2)
{
	return p1.age > p2.age;
}
void test11()
{
	vector<Person> v;
	Person p1(30,"shy");
	Person p2(40, "zph");
	Person p3(10, "wyr");
	Person p4(20, "lhx");
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	for_each(v.begin(), v.end(), print_person);
	sort(v.begin(), v.end(),compare_person);
	for_each(v.begin(), v.end(), print_person);
}

int main()
{
	test11();
	return 0;
}