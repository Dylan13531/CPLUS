/*************************************************************************
    > File Name: arraynew.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 一  1/ 6 14:58:35 2020
 ************************************************************************/

#include <iostream>

int main()
{
	using namespace std;
	double * p3 = new double [3];
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;
	cout << "p3[1] is " << p3[1] << ".\n";
	p3 = p3 + 1;
	cout << "Now p3[1] is " << p3[1] << ".\n";
	p3 = p3 - 1;
	delete [] p3;
	return 0;
}
