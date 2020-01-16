/*************************************************************************
    > File Name: test6.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 六  1/11 16:34:49 2020
 ************************************************************************/

#include <iostream>

struct donator{
	char name[20];
	double amount;
};


int main()
{
	using namespace std;
	donator * donators;
	int number;
	cout << "Enter the number of donators: ";
	cin >> number;
	cin.get();
	donators = new donator [number];
	for (int i=0; i<number; i++)
	{
		cout << "Enter the name ("<< i+1 <<"): " << endl;
		cin.getline(donators[i].name,20);
		cout << "Enter the amount ("<< i+1 <<"): " << endl;
		cin >> donators[i].amount;
		cin.get();
	}
	
	int count=0;
	cout << "Grand Patrons: " << endl;
	for (int i=0; i<number; i++)
	{
		if (donators[i].amount >= 10000)
		{
			cout << donators[i].name << endl;
			count ++;
		}
	}
	if (count == 0)
		cout << "None\n";

	cout << "Patrons: " << endl;
	count=0;
	for (int i=0; i<number; i++)
	{
		if (donators[i].amount <= 10000)
		{
			cout << donators[i].name << endl;
			count ++;
		}
	}
	if (count == 0)
		cout << "None\n";
}
