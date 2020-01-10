/*************************************************************************
    > File Name: cctypes608.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 五  1/10 16:44:05 2020
 ************************************************************************/

#include <iostream>
#include <cctype>

int main()
{
	using namespace std;
	cout << "Enter text for analysis, and type @"
		<< " to terminate input.\n";

	char ch;
	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;

	cin.get(ch);
	while (ch !='@')
	{
		if(isalpha(ch))
			chars++;
		if(isspace(ch))
			whitespace++;
		if(ispunct(ch))
			punct++;
		if(isdigit(ch))
			digits++;
		else
			others++;
		cin.get(ch);
	}
	cout << chars << " letters, "
		<< whitespace << " whitespace, "
		<< digits << " digits, "
		<< punct << " punctuations, "
		<< others << " others.\n";
	return 0;
}
