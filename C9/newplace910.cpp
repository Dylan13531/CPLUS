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
	cout << "Memory addresses:\n" << "(new double [N]) heap: " << pd1 << endl
		<< "(new buffer double [N]) static: " << (void *) buffer << endl;
	cout << "Memory contents: \n";

	for (i=0; i<N; i++)
	{
		cout << pd1[i] << " at " << &pd1[i] << "; ";
		cout << pd2[i] << " at " << &pd2[i] << endl;
	}

	cout << "\nCalling new and placement new a second time:\n";
	double *pd3, *pd4;
	pd3 = new double [N];
	pd4 = new (buffer) double [N];
	for (i=0; i<N; i++)
		pd4[i] = pd3[i] = 1000 + 40.0*i;
	cout << "Memory contents:\n";
	for (i=0; i<N; i++)
	{
		cout << pd3[i] << " at " << &pd3[i] << "; ";
		cout << pd4[i] << " at " << &pd4[i] << endl;
	}

	cout << "\nCalling new and placement new a third time:\n";
	delete [] pd1;
	pd1 = new double [N];
	pd2 = new(buffer+N*sizeof(double)) double [N];
	for (i=0; i<N; i++)
		pd2[i] = pd1[i] = 1000+6.0*i;
	cout << "Memory contents:\n";
	for (i=0; i<N; i++)
	{
		cout << pd1[i] << " at " << &pd1[i] << ";";
		cout << pd2[i] << " at " << &pd2[i] << endl;
	}
	delete [] pd1;
	delete [] pd3;
	return 0;
}
	
