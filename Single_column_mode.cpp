#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<string.h>
#include<stdlib.h>
//单列模式
using namespace std;

class shy
{
public:
	int age;
	int h;
	static shy* instance()
	{
		return s;
	}
private:
	static shy* s;
	shy()//无参构造私有化
	{}
	shy(const shy &p)
	{}
};

shy* shy::s = new shy;


void text1()
{
	//shy p1;//需要调用无参构造
	//shy p2;

}

void text2()
{
	/*shy::s->age = 100;
	shy::s->h = 10;*/

	//shy p1(*shy::s);//调用拷贝构造实例化出一个对象
	//shy::s = NULL;
}

void text3()
{
	shy* p = shy::instance();
	p->age = 10;
	p->h = 20;

	shy* p1 = shy::instance();
	cout << p1->age << " " << p1->h << endl;

}

int main()
{
	text3();
	return 0;
}