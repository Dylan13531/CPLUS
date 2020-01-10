/*************************************************************************
    > File Name: floatnum.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 一 12/30 17:29:12 2019
 ************************************************************************/

#include <iostream>

int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tub = 10.0 / 3.0;
	double mint = 10.0 / 3.0;
	const float million = 1.0e6;

	cout << "tub = " << tub;
	cout << ", a million tubs = " << million * tub;
	cout << ",\nand tem million tubs = ";
	cout << 10 * million * tub << endl;

	cout << "mint = " << mint << " and a million mints = ";
	cout << million * mint << endl;
	return 0;
}
