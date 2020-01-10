/*************************************************************************
    > File Name: if601.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 五  1/10 15:08:21 2020
 ************************************************************************/

#include <iostream>

int main()
{
	using std::cin;
	using std::cout;
	char ch;
	int spaces=0;
	int total=0;
	cin.get(ch);
	while (ch!='.')
	{
		if(ch == ' ')
			++spaces;
		++total;
		cin.get(ch);
	}
	cout << spaces << " spaces, " << total;
	cout << " characters total in sentence\n";
	return 0;
}
