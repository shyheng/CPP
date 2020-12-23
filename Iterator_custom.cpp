#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <stdexcept>
#include <vector>
#include <algorithm>
//迭代器指向的元素是自定义数据类型
using namespace std;

class Person
{
public:
	Person(int age)
	{
		this->age = age;
	}
	int age;
};

void print_person(Person& p)
{
	cout << p.age << endl;
}

void test1()
{
	Person p1(1);
	Person p2(2);
	Person p3(3);
	Person p4(4);
	vector<Person> v;
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	vector<Person>::iterator it_start = v.begin();
	vector<Person>::iterator it_end = v.end();
	for (; it_start != it_end; it_start++)
	{
		//* it_start == Person
		print_person(*it_start);
	}
}

int main()
{
	
	return 0;
}