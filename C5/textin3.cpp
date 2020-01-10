/*************************************************************************
    > File Name: textin3.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 四  1/ 9 17:23:02 2020
 ************************************************************************/

#include <iostream>

int main()
{
	using namespace std;
	char ch;
	int count=0;
	cin.get(ch);
	while(cin.fail() == false)
	{
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << " characters read\n";
	return 0;
}
