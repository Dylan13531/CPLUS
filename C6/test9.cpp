/*************************************************************************
    > File Name: test6.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 六  1/11 16:34:49 2020
 ************************************************************************/

#include <iostream>
#include <fstream>
#include <string>

struct donator{
	char name[20];
	double amount;
};


int main()
{
	using namespace std;
	donator * donators;
	int number;
	ifstream inFile;
	inFile.open("donation.txt");
	if (!inFile.is_open())
	{
		cout << "Could not open the donation.txt" << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}
	inFile >> number;
	inFile.get();
	donators = new donator [number];
	for (int i=0; i<number; i++)
	{
		inFile.getline(donators[i].name,20);
		inFile >> donators[i].amount;
		inFile.get();
	}
	if (inFile.eof())
		cout << "End of file reached.\n";
	
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
