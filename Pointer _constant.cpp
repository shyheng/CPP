#include<iostream>
using namespace std;
//ָ�볣��
void text1()
{
	int a = 10;
	int& b = a;//�������Ż� int*const b = &a
	//ָ�볣�� ���ܸı�ָ�������ָ��
	// b= 0x100;
	b = 1000;//*b = 1000;                 
}

void fun(int *&p)//int *&q = p ==> ������ int * const q = &p
{

}
void text2()
{
	int* p = NULL;
	fun(p);
}




/*
* ָ�������
* ���ù�ʽ
* type &q = p
* typeΪָ������
*/
void fun(int * &q)//int * &q = p
{

}

void text()
{
	int* p = NULL;
	fun(p);
}

int main()
{
	

	return 0;
}