#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <stdexcept>
#include <vector>
#include <algorithm>
//关于string总结
using namespace std;

//string存取字符操作
void test1()
{
	string str("hellowolrd");
	cout << str[4] << endl;
	str[4] = 'c';
	cout << str.at(4) << endl;
}

//string的拼接操作
void test2()
{
	string str1("hello");
	string str2("123456");
	//str1 += str2;
	//str1 += "shy";
	//str1 += 'c';
	//str1.append(str2);
	//str1.append("shy");
	str1.append(str2,2,3);
	cout << str1 << endl;
}

//查找和替换
void test3()
{
	string str("hello");
	string str1("wol");
	str.find(str1);
	cout << str.find(str1) << endl;
	cout << str.find("wol") << endl;
	cout << str.find("world",0,2) << endl;
	cout << str.find('o') << endl;
	cout << str.rfind('o') << endl;
	cout << str.rfind("lr") << endl;
	//str.replace(2,4,str1);
	str.replace(2, 2, "123456");
	cout << str << endl;
}

//string比较操作
void test4()
{
	string str1("hello");
	string str2("world");
	//int ret = str1.compare(str2);
	int ret = str1.compare("world");
	if ( ret> 0)
	{
		cout << "str大" << endl;
	}
	else if (ret < 0)
	{
		cout << "str小" << endl;
	}
	else
	{
		cout << "相等" << endl;
	}
}

//string子串
void test5()
{
	string str1("shyheng");
	string str2 = str1.substr(4, 3);
	cout << str2 << endl;
}

//string插入和删除操作
void test6()
{
	string str1("shyheng");
	string str2("hehe");
	//str1.insert(2, "kkk");
	//str1.insert(2, str2);
	//str1.insert(2,10,'r');
	str1.erase(3, 3);
	cout << str1 << endl;
}

//string 和 c-style字符串转换
//string对象和char*相互转换
void test7()
{
	string str("hello");
	str = "world";//str.operator=(char *)

	char* s = NULL;
	//str.c_str(); const char *
	s = const_cast<char*>(str.c_str());//
	cout << s << endl;
}

int main()
{
	test2();
	return 0;
}