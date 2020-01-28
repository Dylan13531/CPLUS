/*************************************************************************
    > File Name: sales.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 一  1/27 18:04:41 2020
 ************************************************************************/
#include "sales.h"
#include <iostream>

namespace SALES
{
	void setSales(Sales & s, const double ar[], int n)
	{
		int num = QUARTERS<n? QUARTERS:n;
		double min, max, total;
		min = ar[0];
		max = ar[0];
		total = 0;
		for(int i=0; i<num; i++)
		{
			s.sales[i] = ar[i];
			if (min >  ar[i])
				min = ar[i];
			if (ar[i] > max)
				max = ar[i];
			total = total + ar[i];
		}
		s.max = max;
		s.min = min;
		s.n = num; 
		s.average = total/num;
	}

	void setSales(Sales & s)
	{
		using namespace std;
		int i=0;
		double ar[QUARTERS];
		while(cin>>ar[i] && i++<QUARTERS)
			continue;
		setSales(s,ar,i);
	}

	void showSales(const Sales & s)
	{
		using namespace std;
		cout << "Values: ";
		for (int i=0; i<s.n; i++)
		{
			cout << s.sales[i] << "\t";
		}
		cout << endl;
		cout << "Max: " << s.max << "\t" << "Min " << s.min
			<< "\t" << "Average: " << s.average << endl;
	}
}
