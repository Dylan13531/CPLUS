/*************************************************************************
    > File Name: formore.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 三  1/ 8 18:49:37 2020
 ************************************************************************/

#include <iostream>
#include <array>

int main()
{
	using namespace std;
	const int iArSize=100;
	array<long double,iArSize> factorials;
	factorials[1] = factorials[0] = 1LL;
	for (int i=2; i<iArSize; i++)
		factorials[i] = factorials[i-1]*i;
	for (int i=0; i<=iArSize; i++)
		std::cout << i << "! = " << factorials[i] << std::endl;
	return 0;
}
