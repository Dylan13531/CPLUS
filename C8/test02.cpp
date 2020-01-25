/*************************************************************************
    > File Name: test02.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 二  1/21 16:44:42 2020
 ************************************************************************/

#include <iostream>

struct CandyBar{
	char * brandname;
	float weight;
	unsigned int calories;
};
using namespace std;

const CandyBar & SetCb(CandyBar &, char * bn="Millennium Munch",
		const double wt=2.85, const int clor=350);

void ShowCb(const CandyBar &);

int main()
{
	CandyBar cb1,cb2;
	SetCb(cb1);
	ShowCb(cb1);
	char brand2[20] = "Dove";
	double wt = 5.25;
	int clore = 450;
	ShowCb(SetCb(cb2,brand2,wt,clore));
	return 0;
}

const CandyBar & SetCb(CandyBar & cb, char * bn,
		const double wt, const int clor)
{
	cb.brandname = bn;
	cb.weight = wt;
	cb.calories = clor;
	return cb;
}

void ShowCb(const CandyBar & cb)
{
	cout << "BrandName: " << cb.brandname << endl;
	cout << "Weight: " << cb.weight << endl;
	cout << "Calories: " << cb.calories << endl;
	cout << endl;
}

