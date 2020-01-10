/*************************************************************************
    > File Name: test10.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 五  1/10 13:01:54 2020
 ************************************************************************/

#include <iostream>

int main()
{
	using namespace std;
	int number;
	int numPoint = 0;
	int numStar = 0;

	cout << "Enter number of rows: ";
	cin >> number;

	for (int i=0; i<number; i++)
	{
		numStar = i+1;
		numPoint = number-numStar;
		for (int j=0; j<numPoint; j++)
			cout << ".";
		for (int j=0; j<numStar; j++)
			cout << "*";
		cout << "\n";
	}
	return 0;
}
