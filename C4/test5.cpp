/*************************************************************************
    > File Name: test5.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 三  1/ 8 15:49:46 2020
 ************************************************************************/

#include <iostream>

struct CandyBay
{
	char BrandName[20];
	float Weight;
	int Caloria;
};

int main()
{
	using namespace std;
	struct CandyBay snack = {
		"Mocha Munch",2.3,250
	};

	cout << "The brand name is " << snack.BrandName << endl;
	cout << "The weight is " << snack.Weight << endl;
	cout << "The Caloria is " << snack.Caloria << endl;
	return 0;
}
