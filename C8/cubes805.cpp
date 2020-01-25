/*************************************************************************
    > File Name: cubes805.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 二  1/21 11:44:08 2020
 ************************************************************************/

#include <iostream>

double cube(double a);
double refcube(double & ra);

int main()
{
	using namespace std;
	double x=3.0;

	cout << cube(x);
	cout << " = cube of " << x << endl;
	cout << refcube(x);
	cout << " = cube of " << x << endl;
	return 0;
}

double cube(double a)
{
	a *= a * a;
	return a;
}

double refcube(double & ra)
{
	ra *= ra*ra;
	return ra;
}
