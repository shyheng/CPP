#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>

using namespace std;
class Preson
{
public:
	void preson_init(int age,char *name)
	{
		//初始化
		if(age >= 0 && age <= 100)
		   m_age = age;
		strcpy(m_name, name);
	}

	void show_person()
	{
		cout << m_name << " " << m_age << endl;
	}

	int get_age()
	{
		return m_age;
	}

	void set_age(int age)
	{
		if (age >= 0 && age <= 100)
		{
			m_age = age;

		}
	}

	char* get_name()
	{
		return m_name;
	}

	void set_name(char* name)
	{
		strcpy(m_name,name);
	}

private:
	int m_age;
	char m_name[128];
};


void text1()
{
	Preson p1;
	p1.preson_init(20,"zph");
	p1.show_person();
	p1.set_age(19);
	p1.set_name("shy");
	p1.show_person();

}

int main()
{
	text1();
	return 0;
}