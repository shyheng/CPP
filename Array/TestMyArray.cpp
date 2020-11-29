#include"myarray.h"
#include<iostream>

using namespace std;

void text()
{
	//创建数组
	MyArray myarray(50);
	//数组中插入元素
	for (int i = 0; i < 50; i++)
	{
		//尾插法
		myarray.PushBack(i);
		//myarray.SetData(i,i);
	}
	//打印数组中元素
	for (int i = 0; i < myarray.GetLength(); i++)
	{
		cout << myarray.GetData(i) << " ";
	}
	cout << endl;
}


int main()
{
	text();
	return 0;
}