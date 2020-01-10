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
	int sales[12];
	int totalSales=0;
	for (int i=0; i < 12; i++)
	{
		cout << "Enter the values of sales at " << month[i] << ": " << endl;
		cin >> sales[i];
		totalSales += sales[i];
	}
	cout << "This year, Total sales volume is: " << totalSales << "!" << endl; 
	return 0;
}
