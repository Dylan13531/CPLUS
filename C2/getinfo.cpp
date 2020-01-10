/*************************************************************************
    > File Name: getinfo.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 六 12/28 17:20:01 2019
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
	using namespace std;
	int carrots;

	cout << "Houw many carrots do you have?";
	cout << endl;
	cin >> carrots;
	cout << "here are two more.";
	carrots = carrots + 2;
	cout << "Now you have " << carrots << " carrots." << endl;
	return 0;
}
