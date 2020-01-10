/*************************************************************************
    > File Name: structur.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 一  1/ 6 11:22:00 2020
 ************************************************************************/

#include <iostream>

struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	using namespace std;
	inflatable guest =
	{
		"Glorious Gloria",
		1.88,
		29.99
	};

	inflatable pal = 
	{
		"Audacious Arthur",
		3.12,
		32.99
	};

	cout << "Expand your guest list with " << guest.name;
	cout << " and " << pal.name << endl;
	cout <<"You can have both for $"; 
	cout << guest.price + pal.price << endl;
	return 0;
}
