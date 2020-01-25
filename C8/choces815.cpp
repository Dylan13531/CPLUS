/*************************************************************************
    > File Name: choces815.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 二  1/21 16:12:55 2020
 ************************************************************************/

#include <iostream>

template <class T>
T lesser(T a, T b)
{
	return a<b? a:b;
}

int lesser (int a, int b)
{
	a = a<0? -a:a;
	b = b<0? -b:b;
	return a<b? a:b;
}

int main()
{
	using namespace std;
	int m=20;
	int n=-30;
	double x=15.5;
	double y=25.9;
	cout << lesser(m,n) << endl;
	cout << lesser(x, y) << endl;
	cout << lesser<>(m,n) << endl;
	cout << lesser<int>(x,y) << endl;

	return 0;
}
