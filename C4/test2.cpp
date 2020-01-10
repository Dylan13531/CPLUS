/*************************************************************************
    > File Name: test2.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 三  1/ 8 15:33:44 2020
 ************************************************************************/

#include <iostream>
#include <string>

int main()
{
	using namespace std;
	const int ArSize = 20;
	string name;
	string dessert;

	cout << "Enter your name:\n";
	getline(cin,name);
	cout << "Enter your favorate dessert:\n";
	getline(cin,dessert);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	return 0;
}
