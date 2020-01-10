/*************************************************************************
    > File Name: test4.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 五  1/10 11:44:18 2020
 ************************************************************************/

#include <iostream>

int main()
{
	using namespace std;
	const float interest1 = 0.1;
	const float interest2 = 0.05;
	double moneyDophne = 100;
	double moneyCleo = 100;
	int year = 0;
	while (moneyCleo <= moneyDophne)
	{
		year++ ;	
		moneyDophne = moneyDophne + 100*interest1;
		moneyCleo = moneyCleo*(1+interest2);
	}
	cout << "After " << year << ", Cleo's money: " << moneyCleo
		<< ", and Dophne's money: " << moneyDophne << endl;
	return 0;
}
