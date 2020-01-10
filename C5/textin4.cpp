/*************************************************************************
    > File Name: textin4.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 四  1/ 9 17:27:16 2020
 ************************************************************************/

#include <iostream>

int main()
{
	using namespace std;
	int ch;
	int count=0;

	while ((ch=cin.get())!= EOF)
	{
		cout.put(char(ch));
		++count;
	}
	cout << endl << count << " characters read\n";
	return 0;
}
