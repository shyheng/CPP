#include<stdio.h>
//��ʾ��
struct Person
{
	int age;
	char name[128];
};
void Person_eat(struct Person* p)
{
	printf("%s �ڳԷ�\n", p->name);
}


//��ʾdog
struct Dog
{
	int age;
	char name[128];
};
void Dog_eat(struct Person* p)
{
	printf("%s ����\n", p->name);
}


void text1()
{
	struct Person p1;
	p1.age = 20;
	strcpy(p1.name, "shy");
	Person_eat(&p1);

	struct Dog p2;
	p2.age = 2;
	strcpy(p2.name, "����");
	Person_eat(&p2);

	Dog_eat(&p1);//�˵��ù���Ϊ
}
int main()
{
	text1();
	return 0;
}