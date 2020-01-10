/*************************************************************************
    > File Name: waiting.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 四  1/ 9 16:51:03 2020
 ************************************************************************/

#include <iostream>
#include <ctime>

int main()
{
	using namespace std;
	cout << "Enter the delay time, in seconds: ";
	float secs;
	cin >> secs;
	clock_t delay = secs*CLOCKS_PER_SEC;
	cout << "starting\a\n";
	clock_t start = clock();
	while (clock()-start < delay)
		;
	cout << "done\a\n";
	start = clock();
	while (clock()-start < CLOCKS_PER_SEC)
		;
	cout << "\a";
	start = clock();
	while (clock()-start < CLOCKS_PER_SEC)
		;
	cout << "\a";
	return 0;
}
