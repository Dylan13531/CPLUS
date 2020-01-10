/*************************************************************************
    > File Name: enum611.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 五  1/10 17:07:18 2020
 ************************************************************************/

#include<iostream>

enum { red,orange,yellow,green,blue,violet,indigo };

int main()
{
	using namespace std;
	cout << "Enter color code (0-6): ";
	int code;
	cin >> code;
	while (code >=red && code <= indigo)
	{
		switch(code)
		{
			case red	:	cout << "Her lips were red.\n";break;
			case orange	:	cout << "Her hair was orange.\n";break;
			case yellow	:	cout << "Her shoes was yellow.\n";break;
			case green	:	cout << "Her nails was green.\n";break;
			case blue	:	cout << "Her sweatsuit was blue.\n";break;
			case violet	:	cout << "Her eyes were violet.\n";break;
			case indigo	:	cout << "Her mood was indigo.\n";break;
		}
		cout << "Enter color code (0-6) ";
		cin >> code;
	}
	cout << "Bye\n";
	return 0;
}
