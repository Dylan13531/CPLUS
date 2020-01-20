/*************************************************************************
    > File Name: strgfun709.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 四  1/16 17:05:48 2020
 ************************************************************************/

#include <iostream>
unsigned int c_in_str(const char * str, char ch);

int main()
{
	using namespace std;
	char mmm[15] = "minimum";

	char *wail = "ululate";
	unsigned int ms = c_in_str(mmm,'m');
	unsigned int us = c_in_str(wail, 'u');
	cout << ms << " m characters in " << mmm << endl;
	cout << us << " u characters in " << wail << endl;
	return 0;
}


unsigned int c_in_str(const char * str, char ch)
{
	unsigned int count = 0;

	while (*str)
	{
		if (*str == ch)
			count++;
		str++;
	}
	return count;
}
