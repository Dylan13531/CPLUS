/*************************************************************************
    > File Name: textin1.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 四  1/ 9 17:12:55 2020
 ************************************************************************/

#include <iostream>

int main()
{
	using namespace std;
	char ch;
	int count=0;
	cout << "Enter characters; enter # to quit:\n";
	cin >> ch;
	while (ch!= '#')
	{
		cout << ch;
		++count;
		cin >> ch;
	}

	cout << endl << count << " characters read\n";
	return 0;
}
