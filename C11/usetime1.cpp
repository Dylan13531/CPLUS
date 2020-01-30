/*************************************************************************
    > File Name: usetime0.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 三  1/29 18:07:58 2020
 ************************************************************************/

#include <iostream>
#include "mytime1.h"

int main()
{
	using std::cout;
	using std::endl;
	Time planning;
	Time coding(2,40);
	Time fixing(5,55);
	Time total;

	cout << "planning time = ";
	planning.Show();
	cout << endl;

	cout << "coding time = ";
	coding.Show();
	cout << endl;

	cout << "fixing time = ";
	fixing.Show();
	cout << endl;

	cout << "Coding operator+ fixing = ";
	total = coding + fixing;
	total.Show();
	cout << endl;

	cout << "Coding operator+ (fixing) = ";
	Time morefixing(3,28);
	total = total.operator + (fixing);
	total.Show();
	cout << endl;
	return 0;
}
