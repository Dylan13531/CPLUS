/*************************************************************************
    > File Name: test3.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 五  1/10 11:35:19 2020
 ************************************************************************/

#include <iostream>

int main()
{
	using namespace std;
	int sum=0;
	int numInput;

	cout << "Enter the number you want to sum(0 to quit): " << endl;
	cin >> numInput;
	sum = sum + numInput;

	while (numInput != 0)
	{
		cin >> numInput;
		sum += numInput;
	}

	cout << "The answer is: " << sum << endl;
	return 0;
}
