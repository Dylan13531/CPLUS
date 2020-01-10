/*************************************************************************
    > File Name: instr3.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 五  1/ 3 15:04:38 2020
 ************************************************************************/

#include <iostream>

int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	cin.get(name,ArSize).get();
	cout << "Enter your favorate dessert:\n";
	cin.get(dessert,ArSize).get();
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	return 0;
}
