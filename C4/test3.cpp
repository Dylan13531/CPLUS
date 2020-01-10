/*************************************************************************
    > File Name: test3.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 三  1/ 8 15:37:59 2020
 ************************************************************************/

#include <iostream>
#include <cstring>

int main()
{
	using namespace std;
	char cFirstName[20];
	char cLastName[20];
	int iLen;

	cout << "Enter your first name: ";
	cin.get(cFirstName,20).get();
	cout << "Enter your last name: ";
	cin.getline(cLastName,20);
	iLen = strlen(cFirstName)+strlen(cLastName)+3;
	char * sName = new char [iLen];
	sName = strcat(strcat(cLastName," ,") , cFirstName);
	cout << "Here is your information in a single string: " << sName << endl;
	return 0;
}
