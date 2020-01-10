/*************************************************************************
    > File Name: instr2.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 五  1/ 3 14:46:11 2020
 ************************************************************************/

#include <iostream>

int main()
{
	using namespace std;
	const int ArSize = 30;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	cin.getline(name,ArSize);
	cout << "Enter your favorate dessert:\n";
	cin.getline(dessert,ArSize);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	return 0;
}
