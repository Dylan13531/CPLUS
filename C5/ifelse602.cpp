/*************************************************************************
    > File Name: ifelse602.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 五  1/10 15:14:13 2020
 ************************************************************************/

#include <iostream>
int main()
{
	char ch;

	std::cout << "Type, and I shall repeat.\n";
	std::cin.get(ch);
	while (ch != '.')
	{
		if(ch == '\n')
			std::cout << ch;
		else
			std::cout << ++ch;
		std::cin.get(ch);
	}
	std::cout << "\nPlease excuse the slight confusion.\n";
	return 0;
}
