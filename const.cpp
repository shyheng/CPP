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

void text5()
{
	//C++�����εľֲ��������ڷ��ű���
	const int a = 10;
	//a = 100;
	//��const���εľֲ�����ȡ��ַ �����������һ����ʱ����������a�ĵ�ַ
	//int tmp = a;
	int* p = (int *)&a;
	*p = 100;
	cout << a << endl;
}

const int b = 1;
void text6()
{
	//const���ε�ȫ�ֱ������ڳ���
	int* p = (int*)&b;
	*p = 100;//����
	cout << b << endl;
}

void text7()
{
	//�ز���
	//extern const int num;
	//cout << num << endl;
}

//�ڴ����
struct stu
{
	int a;
	int b;
};
void text8()
{
	const struct stu obj = { 1,2 };
	struct stu* p = (struct stu*)&obj;
	p->a = 3;
	p->b = 4;
	cout << obj.a << "" << obj.b << endl;
}
int main()
{
	text8();
	return 0;
}