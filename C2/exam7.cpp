/*************************************************************************
    > File Name: exam7.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 日 12/29 16:25:19 2019
 ************************************************************************/

#include <iostream>

void showTime(int,int);

int main()
{
	using namespace std;
	int hours;
	int minutes;
	cout << "Enter the number of hours: ";
	cin >> hours;
	cout << "Enter the number of minutes: ";
	cin >> minutes;
	cout << endl;
	showTime(hours, minutes);
	return 0;
}

void showTime(int hours,int minutes)
{
	std::cout << "Time: " << hours << ":" << minutes << std::endl;
}
