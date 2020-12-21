#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
//常量转换
using namespace std;
//一般用来加const或去const
void test1()
{
	int* p1 = NULL;
	const int* p2 = NULL;
	//int* p1 = static_cast<int*>(p2);
	p1 = const_cast<int*>(p2);
	p2 = const_cast<const int*>(p1);
}

int main()
{
	return 0;
}