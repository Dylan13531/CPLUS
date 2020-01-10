/*************************************************************************
    > File Name: delete.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 一  1/ 6 16:29:01 2020
 ************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;
char * getname(void);

int main()
{
	char *name;

	name = getname();
	cout << name << " at " << (int *) name << "\n";
	delete [] name;

	name = getname();

	cout << name << " at " << (int*) name << "\n";
	delete [] name;
	return 0;
}

char * getname(void)
{
	char temp[80];
	cout << "Enter last name: ";
	cin >> temp;
	char * pn = new char[strlen(temp)+1];
	strcpy(pn, temp);

	return pn;
}
