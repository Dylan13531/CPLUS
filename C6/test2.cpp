/*************************************************************************
    > File Name: test2.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 六  1/11 14:35:06 2020
 ************************************************************************/

#include <iostream>
#include <array>
int main()
{
	using namespace std;
	array<double,10> donation={0};
	int i=0;
	int count;
	double sum;
	double mean;
	cout << "Enter up to 10 donation(non digitals to quit): ";
	while((cin>>donation[i])&&(i<10))
	{
		sum = sum + donation[i];
		i++;
	}
	mean = sum/i;
	for (int j=0; j<i; j++)
	{
		if (donation[j] > mean)
			count ++;
	}
	cout << "The average donation is " << mean <<endl;
	cout << "The number of donation above average is " << count << endl;
	return 0;
}
