/*************************************************************************
    > File Name: ifelseif603.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 五  1/10 15:42:36 2020
 ************************************************************************/

#include <iostream>
const int Fave=27;

int main()
{
	using namespace std;
	int n;

	cout << "Enter a number in the range 1-100 to find ";
	cout << " the right number: ";
	do
	{
		cin >> n;
		if (n < Fave)
			cout << "Too low -- guess again: ";
		else if (n > Fave)
			cout << "Too high -- guess again: ";
		else
			cout << Fave << " is right!";
	} while (n != Fave);
	return 0;
}
