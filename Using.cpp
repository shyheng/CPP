#include<iostream>
using namespace std;


namespace A
{
	int a = 10;
	void f()
	{
		cout << "shy" << endl;
	}
}

void text()
{
	//ע�� ��using�����ı�ʶ����������ʶ��������������ĳ�ͻʱ�������������
	//int a = 100;
	using A::a;
	using A::f;
	cout << a << endl;
	cout << a << endl;
	cout << a << endl;
	f();
}

void text1()
{
	A::a = 100;
	//using ����ָ��ʹ���������ռ��ʶ������

	using namespace A;
	cout << a << endl;
	f();
}
int main()
{
	text1();
	return 0;
}