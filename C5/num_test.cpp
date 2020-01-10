/*************************************************************************
    > File Name: num_test.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 三  1/ 8 17:03:13 2020
 ************************************************************************/

#include <iostream>

int main()
{
	using namespace std;
	cout << "Enter the starting countdown value: ";
	int limit;
	cin >> limit;
	int i;
	for (i=limit; i; i--)
		cout << "i = " << i << endl;
	cout << "Done now that i = " << i << "\n";
	return 0;
}
