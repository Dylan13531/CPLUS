/*************************************************************************
    > File Name: strgback710.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 四  1/16 17:09:52 2020
 ************************************************************************/

#include <iostream>
char * buildstr(char c, int n);

int main()
{
	using namespace std;
	int times;
	char ch;

	cout << "Enter a character: ";
	cin >> ch;
	cout << "Enter an interger: ";
	cin >> times;
	char *ps = buildstr(ch, times);
	cout << ps << endl;
	delete [] ps;
	ps = buildstr('+', 20);
	cout << ps << "-DONE-" << ps << endl;
	delete [] ps;
	return 0;
}

char * buildstr(char c, int n)
{
	char * pstr  = new char [n+1];
	pstr[n] = '\0';
	while (n--)
		pstr[n] = c;
	return pstr;
}
