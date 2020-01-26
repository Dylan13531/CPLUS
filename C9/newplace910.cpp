/*************************************************************************
    > File Name: newplace910.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 六  1/25 20:47:29 2020
 ************************************************************************/

#include <iostream>
#include <new>
const int BUF=512;
const int N=5;
char buffer[BUF];

int main()
{
	using namespace std;
	double *pd1,*pd2;
	int i;
	cout << "Calling new and placement new:\n";
	pd1 = new double[N];
	pd2 = new (buffer) double[N];
	for (i=0; i<N; i++)
		pd2[i] = pd1[i] = 1000+20.0*i;
	cout << "Memory addresses:\n" << " heap: " << pd1
		<< " static: " << (void *) buffer << endl;
	cout << "Memory contents: \n";

	for (i=0; i<N; i++)
	{
		cout << pd1[i] << " at " << &pd1[i] << "; ";
		cout << pd2[i] << " at " << &pd2[i] << endl;
	}

	cout << "\nCalling new and placement new a second time:\n";
	
