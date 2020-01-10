/*************************************************************************
    > File Name: exam1.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 二 12/31 16:58:21 2019
 ************************************************************************/

#include <iostream>

int main()
{
	using namespace std;
	const int ftPerIn = 12;
	int height;
	int lInch,lfoot;

	cout << "Enter your height in inch:______\b\b\b\b\b\b";
	cin >> height;
	lInch = height%ftPerIn;
	lfoot = height/ftPerIn;
	cout << "Your height is " << lfoot << " foot and " << lInch << " inch.\n";
	return 0;

}
