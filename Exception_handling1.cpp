#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
//�쳣�����ϸ�ƥ��
using namespace std;

int mydive(int a, int b)
{
	string str = "hello";
	if (b == 0)
		throw ;//�����쳣 �׳��쳣 �׳�һ������

	return a / b;
}

void test1()
{
	//���Բ����쳣
	try
	{
		mydive(2, 0);
	}
	catch (char)//���û�в�����׳����쳣������ᱻ��ֹ
	{
		//cout << "����һ��char���͵��쳣" << endl;
		throw 'a';
	}
	catch (int)
	{
		cout << "����һ��int���͵��쳣" << endl;
	}
	catch (double)
	{
		cout << "����һ��double���͵��쳣" << endl;
	}
	catch (...)
	{
		cout << "����һ���������͵��쳣" << endl;
	}
}

int main()
{
	try {
		test1();
	}
	catch (char)
	{
		cout << "����һ��char���͵��쳣" << endl;
	}
}