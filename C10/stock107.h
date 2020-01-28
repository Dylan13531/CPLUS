/*************************************************************************
    > File Name: stock101.h
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 二  1/28 16:20:56 2020
 ************************************************************************/

#ifndef STOCK101_H_
#define STOCK101_H_

#include <string>

class Stock
{
	private:
		std::string company;
		long shares;
		double share_val;
		double total_val;
		void set_tot()
		{
			total_val = share_val*shares;
		}

	public:
		Stock();
		Stock(const std::string &co, long n=0, double pr=0.0);
		~Stock();
		void acquire(const std::string & co, long n, double pr);
		void buy(long num, double price);
		void sell(long num, double price);
		void update(double price);
		void show() const;
		const Stock & topval(const Stock & s) const;
};
#endif
