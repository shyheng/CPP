#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
//重新解释转换
using namespace std;
//一般用来装换指针 整数和指针之间都可以装换

/*
* 总结
*   static_cast 一般用来装换内置的基本数据类型
*   dynamic_cast 一般用来转发生继承关系之间的自定义的数据类型
*   const_cast 一般用来转换加const和去除const
*   reinterpret_cast 一般用来传指针
*/

void test1()
{
	int* p = NULL;
	char* p2 = NULL;
	p = reinterpret_cast<int*>(p2);
	p2 = reinterpret_cast<char*>(p);
	int c = 0;
	//指针转int
	c = reinterpret_cast<int>(p2);
}

int main()
{
	return 0;
}