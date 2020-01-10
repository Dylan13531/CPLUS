/*************************************************************************
    > File Name: assgn_st.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 一  1/ 6 11:33:13 2020
 ************************************************************************/

#include <iostream>
struct inflatable
{
	char name[20];
	float volumn;
	double price;
};

int main()
{
	using namespace std;
	inflatable bouquet=
	{
		"sunflowers",
		0.20,
		12.49
	};
	inflatable choice;
	cout << "bouquet: " << bouquet.name << " for $";
	cout << bouquet.price << endl;

	choice = bouquet;
	cout << "choice: " << choice.name << " for $";
	cout << choice.price << endl;
	return 0;
}
