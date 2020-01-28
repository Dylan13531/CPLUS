/*************************************************************************
    > File Name: test04.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 一  1/27 18:28:04 2020
 ************************************************************************/

#include <iostream>
#include "sales.h"

int main()
{
	using SALES::Sales;
	Sales  test01;
	Sales  test02;

	using SALES::setSales;
	double a[3] = {0.1,0.8,0.9};
	setSales(test01, a ,3);
	setSales(test02);

	using SALES::showSales;
	showSales(test01);
	showSales(test02);
	return 0;
}
