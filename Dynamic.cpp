#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
#include<string>
#include<stdlib.h>

using namespace std;

class person
{
public:
	person()
	{
		cout << "person无参构造" << endl;
	}
	~person()
	{
		cout << "person析构" << endl;
	}
	int a;
};

void text1()
{
	//动态申请空间，在C++中申请不到，不会到堆

	//person* p = (person*)malloc(sizeof(person));

	//free(p);
}

int main()
{
	text1();
	return 0;
}