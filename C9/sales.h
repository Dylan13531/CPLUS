/*************************************************************************
    > File Name: sales.h
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 一  1/27 18:02:36 2020
 ************************************************************************/

namespace SALES
{
	const int QUARTERS = 4;
	struct Sales
	{
		double sales[QUARTERS];
		double average;
		double max;
		double min;
		int n;
	};

	void setSales(Sales & s, const double ar[], int n);

	void setSales(Sales & s);

	void showSales(const Sales & s);
}
