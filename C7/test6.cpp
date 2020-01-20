/*************************************************************************
    > File Name: test6.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 日  1/19 15:44:39 2020
 ************************************************************************/

#include <iostream>
using namespace std;
int FillArray(double *,const int);
void ShowArray(const double *,const int);
void ReverseArray(double *,const int);

const int ArSize=20;

int main()
{
	double testArray[ArSize]={ 0 };
	int arrayLen=0;
	arrayLen = FillArray(testArray,ArSize);
	ShowArray(testArray,arrayLen);
	ReverseArray(testArray,arrayLen);
	cout << "After reverse: ";
	ShowArray(testArray,arrayLen);
	return 0;
}

int FillArray(double* testArray,const int n)
{
	int i=0;
	cout << "Enter up to 20 values in Array"
		"(intervaled by space or Enter,quit by q): ";
	while (cin >> testArray[i] && i<n)
		i++;
	return i;
}

void ShowArray(const double * testArray,const int n)
{
	cout << "Show the content of array: " << endl;
	for (int i=0; i<n; i++)
	{
		cout << testArray[i] << ", ";
	}
	cout << endl;
}

void ReverseArray(double * testArray, const int n) 
{ 
	int i,j;
	double temp;
	for (i=1,j=n-2; i<j; i++,j--)
	{
		temp = testArray[i];
		testArray[i] = testArray[j];
		testArray[j] = temp;
	}
}
