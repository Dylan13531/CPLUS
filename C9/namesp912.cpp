/*************************************************************************
    > File Name: namesp912.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 日  1/26 17:08:29 2020
 ************************************************************************/

#include <iostream>
#include "namesp911.h"

namespace pers
{
	using std::cout;
	using std::cin;
	void getPerson(Person & rp)
	{
		cout << "Enter first name: ";
		cin >> rp.fname;
		cout << "Enter last name: ";
		cin >> rp.lname;
	}

	void showPerson(const Person & rp)
	{
		std::cout << rp.lname << ", " << rp.fname;
	}
}

namespace debts
{
	void getDebt(Debt & rd)
	{
		getPerson(rd.name);
		std::cout << "Enter debt: ";
		std::cin >> rd.amount;
	}
	void showDebt(const Debt & rd)
	{
		showPerson(rd.name);
		std::cout << ": $" << rd.amount << std::endl;
	}

	double sumDebts(const Debt ar[], int n)
	{
		double total = 0;
		for (int i=0; i<n; i++)
			total += ar[i].amount;
		return total;
	}
}
