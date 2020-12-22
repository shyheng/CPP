#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
//异常库的使用
#include <stdexcept>
using namespace std;

void fun()
{
	
	//throw out_of_range("越界");
	throw invalid_argument("段错误");
}

void test1()
{
	try
	{
		fun();
	}
	catch (exception& p)
	{
		cout << p.what() << endl;
	}
}

int main()
{

}