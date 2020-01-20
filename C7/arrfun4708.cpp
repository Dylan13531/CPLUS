/*************************************************************************
    > File Name: arrfun4708.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 四  1/16 16:53:05 2020
 ************************************************************************/

#include <iostream>

const int ArSize=8;
int sum_arr(const int * begin, const int * end);

int main()
{
	using namespace std;
	int cookies[ArSize] = {
		1,2,4,8,16,32,62,128
	};

	int sum = sum_arr(cookies, cookies+ArSize);
	cout << "Total cookies eaten: " << sum << endl;
	sum = sum_arr(cookies, cookies+3);
	cout << "First three eaters ate " << sum << " cookies.\n";
	sum = sum_arr(cookies+4,cookies+ArSize);
	cout << "Last four eaters ate " << sum << " cookies.\n";
	return 0;
}

int sum_arr(const int * begin, const int * end)
{
	const int * pt;
	int total=0;

	for(pt=begin; pt!=end; pt++)
		total += *pt;
	return total;
}
