#include<iostream>
#define _CRT_SECURE_NO_WARNINGS
#include<string.h>

using namespace std;

//权限问题
class person
{
public://公有 都可以访问
	int mTall;//多高，可以让外人知道
protected:// 保护 类外不可访问  内类可以, 子类可以访问
	int mMoney;//多少钱 ，只能自己人知道
private://私有 类外不可访问 内类可以访问  子类不可以访问
	int mAge;// 年龄，自己知道就行

	void show()
	{
		cout << mTall << " ";
		cout << mMoney << " ";
		cout << mAge << " ";
	}
};

void text1()
{
	person p;
	p.mTall = 180;
	
}

int main()
{

	text1();
	return 0;
}
