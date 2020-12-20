#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>

using namespace std;

template <class T1,class T2>
class person
{
public:
	person(T1 a, T2 b);
	void show();
	T1 a;
	T2 b;
};

template <class T1, class T2>
person<T1, T2>::person(T1 a, T2 b)
{
	this->a = a;
	this->b = b;
}

template <class T1, class T2>
void person<T1, T2>::show()
{
	cout << a << " " << endl;
}