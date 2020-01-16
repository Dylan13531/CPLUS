/*************************************************************************
    > File Name: test5.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 六  1/11 16:23:21 2020
 ************************************************************************/

#include <iostream>
double calTaxs(double income)
{
	if (income > 35000)
		return (income-35000)*0.2 + calTaxs(35000);
	else if (income >=15001)
		return (income-15000)*0.15 + calTaxs(15000);
	else if (income >=5001)
		return (income-5000)*0.1+calTaxs(5000);
	else
		return 0;
}

int main()
{
	using namespace std;
	double income;
	double taxs;
	cout << "Enter your income(negtive digit or none digit to quit): ";
	while(cin >> income && income >= 0)
	{
		taxs = calTaxs(income);
		cout << "You should tax for " << taxs << endl;
		cout << "Enter your income(negtive digit or none digit to quit): ";
	}
	return 0;
}
