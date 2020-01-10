/*************************************************************************
    > File Name: exam2.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 六 12/28 17:42:55 2019
 ************************************************************************/

#include <iostream>

double maDistance(double);
int main()
{
	using namespace std;
	double distance;
	double changeDistance;
	cout << "Input the long distance you want to change: " << endl;
	cin >> distance;
	changeDistance = maDistance(distance);
	cout << "The distance " << distance << " long is equal to " << changeDistance << " ma." << endl;
	return 0;
}

double maDistance(double distance)
{
	return 220*distance;
}
