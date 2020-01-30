/*************************************************************************
    > File Name: bank.h
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 三  1/29 14:46:39 2020
 ************************************************************************/
#ifndef _bank_H_
#define _bank_H_
#include <string>

class BankAccount
{
	private:
		std::string name;
		std::string accountNumber;
		unsigned int money;
	public:
		BankAccount();
		BankAccount(const std::string &,
				const std::string &, const unsigned int mn=0);
		BankAccount(const std::string &,  const std::string &);
		~BankAccount();
		void Deposit(const unsigned int money);
		void SetAccount(const std::string & name,const std::string & account,
				const unsigned int mn=0);
		void Withdraw(const unsigned int money);
		void ShowAccount() const;
};

#endif
