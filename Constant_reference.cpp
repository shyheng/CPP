#include<iostream>
using namespace std;
void text1()
{
	int a = 10;
	//const���ε�������& ����ͨ������ȥ�޸����õ����ռ������
	const int& b = a;
	//b = 1000;//err
}

void text2()
{
	//int& b = 100;//�������ó���
	const int& b = 1;//int tmp = 1, const int int &b= tmp
}

int main()
{

}