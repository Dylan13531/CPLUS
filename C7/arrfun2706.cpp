/*************************************************************************
    > File Name: arrfun1705.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 四  1/16 15:28:04 2020
 ************************************************************************/

#include <iostream>
const int ArSize = 8;
int sum_arr(int arr[], int n);

int main()
{
	using namespace std;
	int cookies[ArSize] = {
		1,2,4,8,16,32,64,128
	};

	std::cout << cookies << " = array address, ";
	std::cout << sizeof cookies << " sizeof cookies\n";

	int sum = sum_arr(cookies, ArSize);
	std::cout << "Total cookies eaten: " << sum << "\n";

	sum = sum_arr(cookies,3);
	std::cout << "First 3 eaters ate " << sum << " cookies.\n";
	sum = sum_arr(cookies+4, 4);
	std::cout << "Last four eater ate " << sum << " cookies.\n";

	return 0;
}


int sum_arr(int arr[], int n)
{
	int total = 0;
	std::cout << arr << " = arr, ";
	std::cout << sizeof arr << " = sizeof arr\n";
	for (int i=0; i<n; i++)
		total += arr[i];
	return total;
}
