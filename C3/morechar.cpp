/*************************************************************************
    > File Name: morechar.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 日 12/29 22:00:52 2019
 ************************************************************************/

#include <iostream>

int main()
{
	using namespace std;
	char ch = 'M';
	int i = ch;
	cout << "The ASCII code for " << ch<< " is " << i << endl;
	
	cout << "Displaying char ch using cout.put(ch): ";
	cout.put(ch);
	cout.put('!');
	cout << endl << "Done" << endl;
	cout << 'M' << endl;
	return 0;
}
