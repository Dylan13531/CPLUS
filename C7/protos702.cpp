/*************************************************************************
    > File Name: protos702.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 四  1/16 14:49:49 2020
 ************************************************************************/

#include <iostream>
void cheers(int);
double cube(double x);

int main()
{
	using namespace std;
	cheers(5);
	cout << "Give me a number: ";
	double side;
	cin >> side;
	double volume = cube(side);
	cout << "A " << side << "-foot cube has a volume of";
	cout << volume << " cubic feet.\n";
	cheers(cube(2));
	return 0;
}


void cheers(int n)
{
	using namespace std;
	for (int i = 0; i<n; i++)
		cout << "Cheers! ";
	cout << endl;
}

double cube(double x)
{
	return x*x*x;
}
