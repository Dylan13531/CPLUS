/*************************************************************************
    > File Name: sqrt.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 六 12/28 17:25:13 2019
 ************************************************************************/

#include<iostream>
#include<cmath>

int main()
{
	using namespace std;

	double area;
	cout << "Enter the floor area, in sqare feet, of your home: ";
	cin >> area;
	double side;
	side = sqrt (area);
	cout << "That's the equivalent of a square " << side << " feet to the side." << endl;
	cout << "how fascinating!" << endl;
	return 0;
}
