/*************************************************************************
    > File Name: modulus.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 二 12/31 16:07:22 2019
 ************************************************************************/

#include <iostream>

int main()
{
	using namespace std;
	const int Lbs_per_stn = 14;
	int lbs;

	cout << "Enter your weight in pounds: ";
	cin >> lbs;
	int stone = lbs / Lbs_per_stn;
	int pounds = lbs % Lbs_per_stn;
	cout << lbs << " pounds are " << stone << " stone," << pounds << " pound(s).\n";
	return 0;
}
