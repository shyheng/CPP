#include"myarray.h"
#include<iostream>

using namespace std;

void text()
{
	//��������
	MyArray myarray(50);
	//�����в���Ԫ��
	for (int i = 0; i < 50; i++)
	{
		//β�巨
		myarray.PushBack(i);
		//myarray.SetData(i,i);
	}
	//��ӡ������Ԫ��
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