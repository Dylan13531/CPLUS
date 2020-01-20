/*************************************************************************
    > File Name: recur716.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 四  1/16 17:50:55 2020
 ************************************************************************/

#include <iostream>
void countdown(int n);

int main()
{
	countdown(4);
	return 0;
}

void countdown(int n)
{
	using namespace std;
	cout << "Count down ..." << n << endl;
	if (n>0)
		countdown(n-1);
	cout << n << ": Kaboom!\n";
}
