/*************************************************************************
    > File Name: hexoct2.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 日 12/29 21:13:08 2019
 ************************************************************************/

#include <iostream>
using namespace std;

int main()
{
	using namespace std;
	int chest = 42;
	int waist = 42;
	int inseam = 42;

	cout << "Monsieur cuts a strinking figure!" << endl;
	cout << "chest = " << chest << " (decimal for 42)" << endl;
	cout << hex;
	cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
	cout << oct;
	cout << "inseam = " << inseam << " (octal for 42)" << endl;
	return 0;
}
