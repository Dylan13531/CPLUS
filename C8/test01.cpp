/*************************************************************************
    > File Name: test01.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 二  1/21 16:35:52 2020
 ************************************************************************/

#include <iostream>

int n=0;
void PrintChar(char * , int s=0);

using namespace std;
int main()
{
	char * sp = "good morning\n";
	char * sq = "good afternoon\n";
	char * ss = "Thanks!\n";
	cout << "1#: No \n";
	PrintChar(sp);
	cout << "2#: yes \n";
	PrintChar(sq,1);
	cout << "3#: yes \n";
	PrintChar(ss,1);
	cout << "4#: No\n";
	PrintChar(ss);
	return 0;
}

void PrintChar(char * str, int s)
{
	n++;
	if (s)
		for (int i=0; i<n; i++)
			cout << str;
	else
		cout << str;
}
