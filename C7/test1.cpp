/*************************************************************************
    > File Name: test1.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 五  1/17 17:11:11 2020
 ************************************************************************/

#include <iostream>

double HarmMean(double, double);

int main()
{
	using namespace std;

	double x,y,result;
	cout << "Enter two numbers to calculate (q to quit): ";
	while ((cin >> x >> y) && (x*y != 0))
	{
		result = HarmMean(x,y);
		cout << "The Harmonic Mean of ";
		cout << x << " and " << y << " is " << result << endl;
		cout << "Another two numbers to input (q to quit): ";
	}
	return 0;
}

double HarmMean(const double x, const double y)
{
	return 2.0*x*y/(x+y);
}
