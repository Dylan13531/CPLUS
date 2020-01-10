/*************************************************************************
    > File Name: exam6.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 日 12/29 16:20:27 2019
 ************************************************************************/

#include <iostream>

double lighToAst(double);

int main()
{
	using namespace std;
	double lightYear;
	double astroUnit;
	cout << "Enter the number of light years: ";
	cin >> lightYear;
	astroUnit = lighToAst(lightYear);
	cout << lightYear << " light yeras = " << astroUnit <<" astronomical units." << endl;
	return 0;
}


double lighToAst(double lightYear)
{
	double astroUnit;
	astroUnit = 63240*lightYear;
	return astroUnit;
}
