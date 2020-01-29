/*************************************************************************
    > File Name: bank.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 三  1/29 15:01:13 2020
 ************************************************************************/

#include <iostream>
#include "bank.h"

BankAccount::BankAccount()
{
	name = "None";
	accountNumber = "None";
	money = 0;
}

BankAccount::BankAccount(const std::string & na,
		const std::string & ac, const unsigned int mn)
{
	name = na;
	accountNumber = ac;
	if (mn < 0)
	{
		std::cout << "The money cannot be negtive! set to 0.";
		money = 0;
	}
	else
		money = mn;
}

BankAccount::~BankAccount()
{
	std::cout << "Bye, Bank Account!" << name << std::endl;
}

void BankAccount::Deposit(const unsigned int mn)
{
	if (money < 0)
	{
		std::cout << "The money deposit can not be negtive," << std::endl;
		std::cout << "the amount of money did not add." << std::endl;
	}
	else
	{
		std::cout << "Deposite successfully, The money add " << mn << std::endl;
		money += mn;
	}
}	

void BankAccount::SetAccount(const std::string & na, const std::string & account, 
		const unsigned int mn)
{
	name = na;
	accountNumber = account;
	if (mn < 0)
	{
		std::cout << "The money cannot be negtive! set to 0.";
		money = 0;
	}
	else
		money = mn;
}

void BankAccount::Withdraw(const unsigned int mn)
{
	if (mn < 0)
		std::cout << "Cannot withdraw negtive value, money did not change!" << std::endl;
	else if (mn > money)
		std::cout << "Money is not enough! money did not change!" << std::endl;
	else
	{
		money-=mn;
		std::cout << "Withdraw Successfully!" << std::endl;
	}
}

void BankAccount::ShowAccount() const
{
	std::cout << "The Name: " << name << std::endl;
	std::cout << "The AccountNumber: " << accountNumber << std::endl;
	std::cout << "The banlance: " << money <<std::endl;
}
