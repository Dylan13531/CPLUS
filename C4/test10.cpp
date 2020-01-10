/*************************************************************************
    > File Name: test10.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 三  1/ 8 16:24:21 2020
 ************************************************************************/

#include<iostream>
#include<array>


int main()
{
	using namespace std;
	float averageTime;
	array<float,3> runTime;
	cout << "Enter Three times time: ";
	cin >> runTime[0];
	cin.get();
	cin >> runTime[1];
	cin.get();
	cin >> runTime[2];
	cin.get();
	averageTime = (runTime[0] + runTime[1] +runTime[2])/3.0f;
	cout << "The Average Time is: " << averageTime << endl;
	return 0;
}
