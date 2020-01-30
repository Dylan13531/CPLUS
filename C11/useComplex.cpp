/*************************************************************************
    > File Name: useComplex.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 四  1/30 20:30:39 2020
 ************************************************************************/

#include <iostream>
#include "mcomplex.h"

using namespace std;
using namespace MCOMPLEX;

int main()
{
	Complex a(3.0, 4.0);
	Complex c;
	cout << "Enter a complex number (q to quit):\n";
	while (cin >> c)
	{
		cout << "c is " << c << '\n';
		cout << "complex conjugate is " << ~c << '\n';
		cout << "a is " << a << '\n';
		cout << "a + c is " << a+c << '\n';
		cout << "a - c is " << a-c << '\n';
		cout << "a * c is " << a*c << '\n';
		cout << "2 * c is " << 2*c << '\n';
		cout << "Enter a complex number (q to quit):\n";
	}
	cout << "Done!\n";
	return 0;
}
