#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//ȫ�ֱ���
int a;//����
int a;//����
int a;//����

void f(x,y)
{
	return 100;
}

void text()
{
	f(1);
	f(1,2);
	f(1, 112, 2);
}


void text1()
{
	char* p = malloc(100);
}

struct shy
{
	int a;
	int b;
};
void text2()
{
	struct shy obj;
	
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
	printf("%d\n", a < b? a : b);
	//C����Ŀ�������һ������
	//(a < b ? a : b) = 100;
	*(a < b ? &a : &b) = 100;
}

//C������const���εı���������ջ��
void text5()
{
	const int a = 10;
	//a= 100;
	int* p = &a;
	*p = 100;
	printf("%d\n", a);
	//�����ȫ�ֱ������޸Ĳ��˳���
	
}
void text6()
{
	extern const int num;
	printf("%d\n", num);
}



int main()
{
	//text4();
	//text6();
	return 0;
}