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
	int sum = sum_arr(cookies, ArSize);
	cout << "Total cookies eaten: " << sum << "\n";
	return 0;
}


int sum_arr(int arr[], int n)
{
	int total = 0;
	for (int i=0; i<n; i++)
		total += arr[i];
	return total;
}
