/*************************************************************************
    > File Name: test01.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 一  1/27 15:43:25 2020
 ************************************************************************/

#include "golftest01.h"
#include <iostream>

const int NUM=5;

int main()
{
	golf * test = new golf [NUM];
	int num = 1;
	int i = 0;
	setgolf(test[i],"Ann Birdfree", 24);
	showgolf(test[i]);
	i++;
	while (num != 0 && i < NUM)
	{
		num = setgolf(test[i]);
		i++;
	}
	i--;
	for (int j=0; j<i; j++)
	{
		std::cout << "#" << j << ":" << std::endl;
		showgolf(test[j]);
	}
	return 0;
}
