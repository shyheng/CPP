#include<stdio.h>
//表示人
struct Person
{
	int age;
	char name[128];
};
void Person_eat(struct Person* p)
{
	printf("%s 在吃饭\n", p->name);
}


//表示dog
struct Dog
{
	int age;
	char name[128];
};
void Dog_eat(struct Person* p)
{
	printf("%s 在玩\n", p->name);
}


void text1()
{
	struct Person p1;
	p1.age = 20;
	strcpy(p1.name, "shy");
	Person_eat(&p1);

	struct Dog p2;
	p2.age = 2;
	strcpy(p2.name, "旺财");
	Person_eat(&p2);

	Dog_eat(&p1);//人调用狗行为
}
int main()
{
	text1();
	return 0;
}