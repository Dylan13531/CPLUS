/*************************************************************************
    > File Name: twofile2908.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 六  1/25 20:32:32 2020
 ************************************************************************/

#include <iostream>
extern int tom;
static int dick = 10;
int harry = 200;

void remote_access()
{
	using namespace std;
	cout << "remote_access() reports the following addresses:\n";
	cout << &tom << " = &tom, " << &dick << " = &dick, ";
	cout << &harry << " =&harry\n";
}
