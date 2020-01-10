/*************************************************************************
    > File Name: dowhile.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 四  1/ 9 17:02:34 2020
 ************************************************************************/

#include <iostream>

int main()
{
	using namespace std;
	int n;

	cout << "Enter numbers in the range 1-10 to find ";
	cout << "my favorate number\n";

	do
	{
		cin >> n;
	}while(n!=7);
	cout << "Yes, 7 is my favorate.\n";
	return 0;
}
