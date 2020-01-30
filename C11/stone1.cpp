/*************************************************************************
    > File Name: stone1.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 四  1/30 18:29:21 2020
 ************************************************************************/

#include<iostream>
#include"stonewt1.h"

int main()
{
	using std::cout;
	Stonewt poppins(9,2.8);
	double p_wt = poppins;
	cout << "Convert to double => ";
	cout << "Poppins: " << p_wt << " pounds.\n";
	cout << "Convert to int => ";
	cout << "Poppins: " << int (poppins) << " pounds.\n";
	return 0;
}
