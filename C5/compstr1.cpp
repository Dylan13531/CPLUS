/*************************************************************************
    > File Name: compstr1.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 三  1/ 8 20:11:59 2020
 ************************************************************************/

#include <iostream>
#include <cstring>

int main()
{
	using namespace std;
	char word[5] = "?ate";
	for (char ch='a';strcmp(word,"mate"); ch++)
	{

		cout << word <<endl;
		word[0] = ch;

	}
	cout << "After loop ends, word is " << word << endl;
	return 0;
}
