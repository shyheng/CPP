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
int main()
{
	//text4();
	return 0;
}