/*************************************************************************
    > File Name: pointer.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 一  1/ 6 14:16:13 2020
 ************************************************************************/

#include <iostream>

int main()
{
	using namespace std;
	int updates = 6;
	int * p_updates;
	p_updates = &updates;

	cout << "Value: updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;

	cout << "Addresses: &updates = " << &updates;
	cout << ", p_updates = " << p_updates << endl;

	*p_updates = *p_updates + 1;
	cout << "Now updates = " << updates << endl;
	return 0;
}
