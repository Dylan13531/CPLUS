/*************************************************************************
    > File Name: namesp911.h
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 日  1/26 17:03:53 2020
 ************************************************************************/

#include <string>

namespace pers
{
	struct Person
	{
		std::string fname;
		std::string lname;
	};
	void getPerson(Person &);
	void showPerson(const Person &);
}

namespace debts
{
	using namespace pers;
	struct Debt
	{
		Person name;
		double amount;
	};
	void getDebt(Debt &);
	void showDebt(const Debt &);
	double sumDebts(const Debt ar[], int n);
}
