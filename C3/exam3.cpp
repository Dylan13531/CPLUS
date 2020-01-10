/*************************************************************************
    > File Name: exam3.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 二 12/31 17:46:26 2019
 ************************************************************************/

#include<iostream>

int main()
{
	using namespace std;

	int degrees,minutes,seconds;
	float result;
	const int minPerDeg = 60;
	const int secPerMin = 60;
	cout << "Enter a latitude in degree, minutes, and seconds:\n" << "First, enter the degrees: ";
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;
	cout.setf(ios_base::fixed,ios_base::floatfield);
	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds ";
	result = static_cast<float>(degrees) + float(minutes)/minPerDeg + (float)seconds/secPerMin/minPerDeg;
	cout << "= " << result << " degrees" << endl;
	return 0;
}
