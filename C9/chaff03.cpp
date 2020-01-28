/*************************************************************************
    > File Name: chaff03.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 一  1/27 16:31:20 2020
 ************************************************************************/

#include <iostream>
#include <cstring>
#include "chaff.h"

void setchaff(chaff & test, char * dross, int slag)
{
	strcpy(test.dross,dross);
	test.slag = slag;
}

void showchaff(const chaff & test)
{
	using std::cout;
	using std::endl;
	cout << "The dross is: " << test.dross << endl;
	cout << "The slag: " << test.slag << endl;
}


int setchaff(chaff & test)
{
	std::cout << "Enter the dross: ";
	std::cin.getline(test.dross,20);
	if (strlen(test.dross) == 0)
		return 0;
	std::cout << "Enter the slag: ";
	while(!(std::cin>>test.dross))
	{
		std::cin.clear();
		while(std::cin.get() != '\n')
			continue;
	}
	std::cin.get();
	return 1;
}
