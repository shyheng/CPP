#include<iostream>
using namespace std;
void text1()
{
	int a = 10;
	//const修饰的是引用& 不能通过引用去修改引用的这块空间的内容
	const int& b = a;
	//b = 1000;//err
}

void text2()
{
	//int& b = 100;//不能引用常量
	const int& b = 1;//int tmp = 1, const int int &b= tmp
}

int main()
{

}