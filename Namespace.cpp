#include<iostream>
using namespace std;

//�����ռ�Ķ��� ���붨����ȫ�ַ�Χ��
//�����ռ��¿��Դ�� ���� ���� �ṹ�� ��
//�����ռ����������,�������ռ��൱�����ϲ�����

namespace A 
{
		int a = 10;
		void fun()
		{
			cout << "shy" << endl;
		}
		struct std
		{};
		class obj
		{};
		void f(int agr);
}

void A::f(int agr)
{
	cout << agr << endl;
}

	namespace B
{
	int a = 10;
	int b = 20;
}
	namespace B
	{
		int c = 10;
	}

	namespace C
	{
		int a = 10;
		int b = 20;
		namespace D
		{
			int a = 100;
		}
	}
	//ע�⣺��������ռ�û��������� name��������ռ������еĳ�Ա
	//����������������static���� ֻ�ܵ�ǰ�ļ����� ���������������

	namespace {
		int a = 10;
		void func() {
			cout << "shy" << endl;
		}
	}

	namespace S = B;
void text()
{
	cout << A::a << endl;
	cout << B::a << endl;
	cout << B::b << endl;
	A::fun();
	cout << B::c << endl;
}

void text1()
{
	cout << C::a << endl;
	cout << C::D::a << endl;
}

void text2()
{
	A::f(1);
	S::a;
}

int main()
{
	text2();
	return 0;
}