/*************************************************************************
    > File Name: exam5.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 日 12/29 16:10:34 2019
 ************************************************************************/

#include <iostream>

double celToFah(double);

int main()
{
	using namespace std;
	double celValue;
	double fahValue;

	cout << "Please enter a Celsius value: ";
	cin >> celValue;
	fahValue = celToFah(celValue);
	cout << celValue << " degrees Celsius is " << fahValue << " degrees Fahrenheit." << endl;
	return 0;
}


double celToFah(double celValue)
{
	double fahValue;
	fahValue = 1.8*celValue + 32;
	return fahValue;
}
