#include "person.hpp"
//
int main()
{
	//调用构造函数和show函数需要创建，但是没有这两个的定义，不能创建
	person<int, int> p(10, 20);
	p.show();
	return 0;
}