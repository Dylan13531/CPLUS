/*************************************************************************
    > File Name: test5.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 日  1/19 15:35:35 2020
 ************************************************************************/

#include <iostream>

unsigned long long FactorialRec(int n);
int main()
{
	int number;
	unsigned long long result;
	using namespace std;
	cout << "Enter the number to calculate factorial: ";
	while((cin>>number) && (number>=0))
	{
		result = FactorialRec(number);
		cout << "The factorial of "<< number << " is: " << result;
		cout << "\nAnother number(q to quit): ";
	}
	return 0;
}

unsigned long long FactorialRec(int n)
{
	if (n > 0)
		return n*FactorialRec(n-1);
	return 1;
}
