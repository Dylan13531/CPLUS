/*************************************************************************
    > File Name: left809.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 二  1/21 14:43:49 2020
 ************************************************************************/

#include <iostream>
const int ArSize = 80;
char * left(const char * str, int n=1);

int main()
{
	using namespace std;
	char sample[ArSize];
	cout << "Enter a string:\n";
	cin.get(sample, ArSize);
	char *ps = left(sample,4);
	cout << ps << endl;
	delete [] ps;
	ps = left(sample);
	cout << ps << endl;
	delete [] ps;
	return 0;
}

char * left(const char * str, int n)
{
	if(n<0)
		n=0;
	char * p = new char[n+1];
	int i;
	for (i=0; i<n && str[i]; i++)
		p[i] = str[i];
	while (i <= n)
		p[i++] = '\0';
	return p;
}
