/*************************************************************************
    > File Name: tempover.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 二  1/21 15:59:58 2020
 ************************************************************************/

#include <iostream>

template <typename T>
void SumArray(T arr[], int n);

template <typename T>
void SumArray(T * arr[], int n);

struct debts
{
	char name[50];
	double amount;
};


int main()
{
	using namespace std;
	int things[6] = {13,31,103,301,310,130};
	struct debts mr_E[3] ={
		{"Ima Wolfe", 2400.0},
		{"Ura Foxe", 1300.0},
		{"Iby Stout", 1800.0}
	};
	double * pd[3];

	for (int i=0; i<3; i++)
		pd[i] = &mr_E[i].amount;
	cout << "Listing Mr. E's counts of things:\n";
	SumArray(things, 6);
	cout << "Listing Mr. E's debts:\n";
	SumArray(pd,3);
	return 0;
}

template<typename T>
void SumArray(T arr[], int n)
{
	T sum=0;
	using namespace std;
	cout << "template A: ";
	for (int i=0; i<n; i++)
		sum += arr[i];
	cout << sum;
	cout << endl;
}

template<typename T>
void SumArray(T * arr[], int n)
{
	T total=0;
	using namespace std;
	cout << "template B: ";
	for (int i=0; i<n; i++)
		total +=  * arr[i];
	cout << total;
	cout << endl;
}

