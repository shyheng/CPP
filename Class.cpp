#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<string.h>

using namespace std;

class Phone
{
public:
	Phone(string name)
	{
		pho_name = name;
		cout << " phone构造函数" << endl;
	}
	~Phone()
	{
		cout << "析构" << endl;
	}
	string pho_name;
};

class Game
{
public:
	Game(string name)
	{
		game_name = name;
		cout << "game构造函数" << endl;
	}
	~Game()
	{
		cout << "析构" << endl;
	}
	string game_name;

};

class Person
{
public:
	//Person(string per_name1,string pho_name,string g_name)
	//{
	//	per_name = per_name1;
	//	phone.pho_name = pho_name;
	//	game.game_name = g_name;
	//}
	Person(string per_name1, string pho_name, string g_name) :per_name(per_name1), phone(pho_name), game(g_name) {
		cout << " person构造函数" << endl;
	}
	void show()
	{
		cout << "人" << phone.pho_name << "玩着" << game.game_name << endl;
	}
	~Person()
	{
		cout << "析构" << endl;
	}
	string per_name;
	Game game;
	Phone phone;
	
	
};

void text1()
{
	Person p1("shy","zph","ll");
	p1.show();
}

int main()
{
	text1();
	return 0;
}