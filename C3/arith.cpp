/*************************************************************************
    > File Name: arith.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 一 12/30 17:41:08 2019
 ************************************************************************/

#include <iostream>

int main()
{

	using namespace std;
	float hats, heads;

	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Enter a number: ";
	cin >> hats;
	cout << "Enter another number: ";
	cin >> heads;
	cout << "hats = " << hats << "; heads = " << heads << endl;
	cout << "hats + heads = " << hats + heads << endl;
	cout << "hats - heads = " << hats - heads << endl;
	cout << "hats * heads = " << hats * heads << endl;
	cout << "hats / heads = " << hats / heads << endl;
	return 0;
}
