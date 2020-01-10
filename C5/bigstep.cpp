/*************************************************************************
    > File Name: bigstep.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 三  1/ 8 18:54:13 2020
 ************************************************************************/

#include <iostream>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	cout << "Enter an integer: ";
	int by;
	cin >> by;
	cout << "Counting by " << by << "s:\n";
	for (int i; i<100; i=i+by)
		cout << i << endl;
	return 0;
}
