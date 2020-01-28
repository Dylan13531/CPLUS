/*************************************************************************
    > File Name: golftest01.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 一  1/27 14:46:21 2020
 ************************************************************************/
#include <iostream>
#include <cstring>
#include "golftest01.h"

void setgolf(golf & g, const char * name, int hc)
{
	strcpy(g.fullname,name);
	g.hadicap = hc;
}

int setgolf(golf & g)
{
	std::cout << "Enter the name of golf: ";
	std::cin.getline(g.fullname,Len);
	if (strlen(g.fullname) == 0)
		return 0;
	std::cout << "Enter the hadicap: ";
	while (!(std::cin >> g.hadicap))
	{
		std::cin.clear();
		while(std::cin.get() != '\n')
			continue;
	}
	std::cin.get();
	return 1;
}

void hadicap(golf & g, int hc)
{
	g.hadicap = hc;
}

void showgolf(const golf & g)
{
	std::cout << "The name of golf: " << g.fullname << std::endl;
	std::cout << "The hadicap: " << g.hadicap << std::endl;
}
