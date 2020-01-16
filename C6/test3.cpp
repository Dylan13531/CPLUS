/*************************************************************************
    > File Name: test3.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 六  1/11 14:50:25 2020
 ************************************************************************/

#include <iostream>
#include <cctype>

void ShowMenu()
{
	using namespace std;
	cout << "Please enter one of the following choices:	"<<	endl;
	cout << "c)\tcarnivore\t\t\t\tp)\tpianist" << endl;
	cout << "t)\ttree\t\t\t\tg)\tgame" << endl;
}

int main()
{
	using namespace std;
	char choose;
	bool a;
	cout << "Please enter a  c, p, t or g:";
	ShowMenu();
	while(cin.get(choose))
	{
		cin.get();
		switch (tolower(choose))
		{
			case 'c':	cout << "A Tiger is a canivore."; break;
			case 'p':	cout << "Lang lang is a pianist.";	break;
			case 't':	cout << "A maple is a tree.";	break;
			case 'g':	cout << "The life is a game.";	break;
			default:	break;
		}
		cout << "\nPlease enter a c, p, t or g: ";
	}
	return 0;
}
