/*************************************************************************
    > File Name: and605.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 五  1/10 16:19:38 2020
 ************************************************************************/

#include <iostream>
const int ArSize=6;

int main()
{
	using namespace std;
	float naaq[ArSize];
	cout << "Enter the NAAQs (New Age Awareness Quotients) "
		<< "of\nyour neighbors. Program teminates "
		<< "Whe you make\n" << ArSize << " entries "
		<< "or enter a negative value.\n";

	int i = 0;
	float temp;
	cout << "First value: ";
	cin >> temp;
	while (i<ArSize && temp >=0 )
	{
		naaq[i] = temp;
		++i;
		if (i<ArSize)
		{
			cout << "Next value: ";
			cin >> temp;
		}
	}
	if (i==0)
		cout << "No data--bye\n";
	else
	{
		cout << "Enter your NAAQ: ";
		float you;
		cin >> you;
		int count = 0;
		for (int j=0; j<i; j++)
			if (naaq[j]>you)
				++count;
		cout << count;
		cout << " of your neighbors have greater awareness of\n"
			<< "the New Age than you do.\n";
	}
	return 0;
	
}
