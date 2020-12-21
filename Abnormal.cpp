#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
//异常基本概念
using namespace std;

int mydive(int a, int b)
{
	if (b == 0)
		return -1;//errno = 2

	return a / b;
}

void test1()
{
	int ret = mydive(1, -1);
	if (ret == -1)
	{
		cout << "除数为0" << endl;//perror("");
	}
}

int main()
{
	test1();
	return 0;
}