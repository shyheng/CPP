#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <stdexcept>
#include <vector>
#include <deque>
#include <algorithm>
#include <functional>
//函数对象适配器
using namespace std;

//一元继承 public unary_function<参数1，返回值类型>
//二元继承public binary_function<int,int,void>
class Print :public binary_function<int, int, void>
{
public:
	void operator()(int a,int num) const
	{
		cout << a << " " << num << endl;
		cout << a+num << endl;
	}
};

void test()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	//绑定参数 bind2nd
	//bind1st
	//for_each(v.begin(),v.end(),bind2nd(Print(),100));
	for_each(v.begin(),v.end(),bind1st(Print(),200));
}

int main()
{
	return 0;
}