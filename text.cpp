#include<iostream>
#include<stdlib.h>
using namespace std;
//ȫ�ֱ���
int a;//����
extern int a;//����
extern int a;//����

//void f(x, y)//�β�û������
//{
//	//return 100;
//}

void text()
{
	//f(1);
	//f(1, 2);
	//f(1, 112, 2);
}

void text1()
{
	char* p = (char*)malloc(100);
}

struct shy
{
	int a;
	int b;
};
void text2()
{
	shy obj;

}

void text3()
//bool���͵ı���ֻ������ֵ true
{

	bool f = true;
}

//��Ŀ�����

void text4()
{
	int a = 10;
	int b = 20;
	printf("%d\n", a < b ? a : b);
    //C++����Ŀ�������һ������
	(a < b ? a : b) = 100;
}


int main()
{

	return 0;
}