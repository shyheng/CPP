#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>

using namespace std;
//C++�ж�����ķ�װ �����Ժ���Ϊ��װ��һ��
//�� �������������Ժ���Ϊ�����ҷ�װ��һ��
//struct Person
//�ṹ�� �����г�ԱĬ�϶��ǹ��е� ���е����г�Ա��˽�У������޸�
class Person
{
public:
	//���е����еĳ�Ա ���ʵ�Ȩ�޶���˽�е� private
	//����
	int age;
	char name[128];
	//��Ϊ
	void person_eat()
	{
		printf("%s �Է�\n", name);
	}
};

struct Dog
{
	int age;
	char name[128];

	void Dog_eat()
	{
		printf("%s ��\n", name);
	}
};
void text1()
{
	//ͨ���࣬ʵ����һ�����������������������
	Person p1;
	p1.age = 10;
	strcpy(p1.name,"shy");
	p1.person_eat();

	Dog p2;
	p2.age = 2;
	strcpy(p2.name, "����");
	p2.Dog_eat();

	
}
int main()
{
	text1();
	return 0;
}