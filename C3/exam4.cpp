/*************************************************************************
    > File Name: exam4.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 二 12/31 19:05:23 2019
 ************************************************************************/

#include <iostream>

int main()
{
	using namespace std;
	long seconds;
	int days, hours, minutes,aseconds;
	int hoursPerDay = 24;
	int minPerHour = 60;
	int secPerMin = 60;

	cout << "Enter the number of seconds: ";
	cin >> seconds;
	days = seconds/secPerMin/minPerHour/hoursPerDay;
	hours = seconds%(secPerMin*minPerHour*hoursPerDay)/(secPerMin*minPerHour);
	minutes = seconds%(secPerMin*minPerHour)/secPerMin;
	aseconds = seconds%secPerMin;
	cout << seconds << " = " << days << " days, " << hours << " hours, " 
		<< minutes << " minutes, " << aseconds << " seconds.";
	cout << endl;
	return 0;

}
