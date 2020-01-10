/*************************************************************************
    > File Name: test3.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 三  1/ 8 15:37:59 2020
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <string>

int main()
{
	using namespace std;
	string strFirstName;
	string strLastName;
	string sName;

	cout << "Enter your first name: ";
	getline(cin,strFirstName);
	cout << "Enter your last name: ";
	getline(cin,strLastName);
	sName = strLastName + ", "  + strFirstName;
	cout << "Here is your information in a single string: " << sName << endl;
	return 0;
}
