/*************************************************************************
    > File Name: mixtypes.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 一  1/ 6 16:51:26 2020
 ************************************************************************/

#include <iostream>

struct antarctica_years_end
{
	int year;
};

int main()
{
	antarctica_years_end s01,s02,s03;
	s01.year = 1998;
	antarctica_years_end * pa = &s02;
	pa->year = 1999;

	antarctica_years_end trio[3];
	trio[0].year = 2003;
	std::cout << trio->year << std::endl;
	const antarctica_years_end *arp[3] = {
		&s01, &s02, &s03
	};
	std::cout<< arp[1] -> year << std::endl;
	const antarctica_years_end ** ppa = arp;
	auto ppb = arp;

	std::cout << (*ppa)->year << std::endl;
	std::cout << (*(ppb+1))->year << std::endl;
	return 0;
};
