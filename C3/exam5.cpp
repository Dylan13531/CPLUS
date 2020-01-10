/*************************************************************************
    > File Name: exam5.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 二 12/31 19:15:50 2019
 ************************************************************************/

#include <iostream>
using namespace std;

int main()
{
	long long wPopulation, usPopulation;
	float percentage;

	cout << "Enter the world\'s population: ";
	cin >> wPopulation;
	cout << "Enter the population of the US: ";
	cin >> usPopulation;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	percentage = static_cast<float>(usPopulation) / float(wPopulation) * 100;
	cout << "The population of the US is " << percentage << "\% of the world population." << endl;
	return 0;
}
