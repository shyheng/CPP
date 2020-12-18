#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>

using namespace std;
//函数模板 用于排序
template <class T>
void array_sort(T *a,int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				T temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

template<class T>
void print_array(T* p, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;
}

void test1()
{
	int a[10] = { 1,56,45,56,6,46,51,57,99,8};
	array_sort(a, sizeof(a) / sizeof(a[0]));
	print_array(a, sizeof(a) / sizeof(a[0]));
}

void test2()
{
	double b[5] = {3.1,4.5,6.2,86.3,0.56};
	array_sort<double>(b, sizeof(b) / sizeof(b[0]));
	print_array<double>(b, sizeof(b) / sizeof(b[0]));
}

int main()
{
	test2();
	return 0;
}
