/*************************************************************************
    > File Name: firstref802.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 一  1/20 21:03:57 2020
 ************************************************************************/

#include <iostream>

int main()
{
	using namespace std;
	int rats = 101;
	int & rodents = rats;
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	rodents++;
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;

	cout << "rats address = " << &rats;
	cout << ", rodents address = " << &rodents << endl;
	return 0;

}
