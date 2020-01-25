/*************************************************************************
    > File Name: sceref.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 二  1/21 11:28:49 2020
 ************************************************************************/

#include <iostream>

int main()
{
	using namespace std;
	int rats = 101;
	int & rodents = rats;

	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;

	cout << "rats address = " << &rodents << endl;

	int bunnies = 50;
	rodents = bunnies;
	cout << "bunnies = " << bunnies;
	cout << ", rats = " << rats;
	cout << ", rodents = " << rodents << endl;

	cout << "bunnies addres = " << &bunnies;
	cout << ", rodents address = " << &rodents << endl;
	return 0;
}
