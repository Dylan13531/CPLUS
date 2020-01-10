/*************************************************************************
    > File Name: numstr.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 五  1/ 3 15:14:55 2020
 ************************************************************************/

#include <iostream>
int main()
{
	using namespace std;
	cout << "What year was your house built?\n";
	int year;
	cin >> year;
	cin.get();
	cout << "What's your age?";
	int age;
	cin >> age;
	cin.get();
	cout << "What is its street address?\n";
	char address[80];
	cin.getline(address,80);
	cout << "Year built: " << year << endl;
	cout << "Address: " << address << endl;
	cout << "Done!\n";
	return 0;
}
