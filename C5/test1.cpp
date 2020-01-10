/*************************************************************************
    > File Name: test1.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 五  1/10 11:22:03 2020
 ************************************************************************/

#include <iostream>

int main()
{
	using namespace std;
	int iNum1,iNum2;
	int iSum(0);
	cout << "Enter Num1: ";
	cin >> iNum1;
	cin.get();
	cout << "Enter Num2: ";
	cin >> iNum2;
	cin.get();

	for (int i=iNum1; i<=iNum2; i++)
		iSum += i;
	cout << "The sum between " << iNum1 << " and " << iNum2 << " is " << iSum << endl;
	return 0;
		
}
