/*************************************************************************
    > File Name: useBank.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 三  1/29 15:50:35 2020
 ************************************************************************/

#include "bank.h"
#include <iostream>

int main()
{
	 BankAccount Lily;
	 Lily.ShowAccount();
	 Lily.SetAccount("Lily","1010017896",50000);
	 Lily.ShowAccount();
	 BankAccount Tom("Tom","20398601532",20000);
	 Tom.ShowAccount();
	 Tom.Deposit(50000);
	 Tom.ShowAccount();
	 Tom.Withdraw(15000);
	 Tom.ShowAccount();
}
