/*************************************************************************
    > File Name: arrobj715.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 四  1/16 17:42:48 2020
 ************************************************************************/

#include <iostream>
#include <string>

const int Seasons = 4;
const char *  Snames[Seasons]={
	"Spring", "Summer", "Fall", "Winter"
};

void fill(double * pa);

void show(const double  * da);

int main()
{
	double * expenses = new double [Seasons] ;
	fill(expenses);
	show(expenses);
	delete [] expenses;
	return 0;
}

void fill(double * pa)
{
	using namespace std;
	for (int i=0; i<Seasons; i++)
	{
		cout << "Enter " << Snames[i] << " expense: ";
		cin >> *(pa+i);
	}
}

void show(const double * da)
{
	using namespace std;
	double total=0.0;
	cout << "\nEXPENSES\n";
	for (int i=0; i<Seasons; i++)
	{
		cout << Snames[i] << ": $" << *(da+i) << endl;
		total += *(da+i);
	}
	cout << "Total Expenses: $" << total << endl;
}
