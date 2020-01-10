/*************************************************************************
    > File Name: typecast.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 二 12/31 16:45:30 2019
 ************************************************************************/

#include <iostream>

int main()
{
	using namespace std;
	int auks, bats, coots;

	auks = 19.99 + 11.99;
	bats = (int) 19.99 + (int) 11.99;
	coots = int(19.99) + int(11.99);
	cout << "auks = " << auks << ", bats = " << bats;
	cout << ", coots = " << coots << endl;

	char ch = 'Z';
	cout << "The code for " << ch << " is";
	cout << int(ch) << endl;
	cout << "Yes, the code is ";
	cout << static_cast<int>(ch) << endl;
	return 0;
}
