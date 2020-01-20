/*************************************************************************
    > File Name: test4.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 六  1/18 11:40:40 2020
 ************************************************************************/

#include <iostream>

long double probability(unsigned numbers, unsigned picks);

int main()
{
	using namespace std;
	double total1,choices1,total2,choices2;

	cout << "Enter the total number of choices on the game card and \n"
		"the number of picks allowed in the first group:\n";
	while((cin>>total1>>choices1)&&choices1<total1)
	{
		cout << "Enter the total number of choices on the game card and \n"
			"the number of picks allowed in the second group:\n";
		if (!((cin>>total2>>choices2)&&(choices2<total2)))
			break;
		cout << "you have one chance in ";
		cout << probability(total1,choices1)*probability(total2,choices2);
		cout << " of winning.\n";
		cout << "Next numbers(q to quit):\n";
	}
	cout << "bye\n";
	return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;
	long double n;
	unsigned int p;
	for (n=numbers,p=picks;p>0;n--,p--)
		result *= n/p;
	return result;
}
