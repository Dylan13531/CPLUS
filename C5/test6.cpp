/*************************************************************************
    > File Name: test5.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 五  1/10 12:03:58 2020
 ************************************************************************/

#include <iostream>

int main()
{
	using namespace std;
	char * month[12]={
		"January","February","March","April","May","June",
		"July","August","September","October","November","December"
	};
	int sales[3][12];
	int totalSales[3]={0,0,0};
	int allSales = 0;
	char * strYear[3]={ "first","second","third" };
	for (int j=0; j < 3; j++)
	{
		for (int i=0; i < 12; i++)
		{
			cout << "Enter the values of sales at the " << strYear[j]
				<<" year, in " << month[i] << ": " << endl;
			cin >> sales[j][i];
			totalSales[j] += sales[j][i];
		}
		cout << "The "<< strYear[j] <<" year, Total sales volume is: " << totalSales[j] << "!" << endl; 
		allSales += totalSales[j];
	}
	cout << "The total sales of three years: " << allSales <<"! "<< endl;
	return 0;
}
