#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <stdexcept>
#include <vector>
#include <algorithm>
//string容器的构造函数
using namespace std;

void test1()
{
	string str;
	string str1("hello");
	string str2(str1);
	string str3(5, 'k');
	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
}

int main()
{
	test1();
	return 0;
}