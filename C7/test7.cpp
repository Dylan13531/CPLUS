/*************************************************************************
    > File Name: arrfun3707.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 四  1/16 15:40:36 2020
 ************************************************************************/

#include <iostream>
const int Max=5;

double * fill_array(double * ar, int limit);
void show_array(double * ar, const double * );
void revalue(double r, double * ar, const double *);

int main()
{
	using namespace std;
	double properties[Max];

	double * endAr=fill_array(properties, Max);
	show_array(properties, endAr);
	if (endAr > properties)
	{
		cout << "Enter revaluetion factor: ";
		double factor;
		while (!(cin >> factor))
		{
			cin.clear();
			while(cin.get() != '\n')
				continue;
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor,properties,endAr);
		show_array(properties, endAr);
	}
	cout << "Done.\n";
	cin.get();
	cin.get();
	return 0;
}

double * fill_array(double * ar, int limit)
{
	using namespace std;
	double temp;
	int i;
	for (i=0; i<limit; i++)
	{
		cout << "Enter value #" << (i+1) << ": ";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (temp < 0)
			break;
		*(ar+i) = temp;
	}
	return ar+i-1;
}


void show_array(double * ar, const double * endAr)
{
	using namespace std;
	for (int i=0; ar<=endAr; ar++,i++)
	{
		cout << "Property #" << i+1 << ": $";
		cout << *ar<< endl;
	}
}


void revalue(double r, double * ar, const double * endAr)
{
	for (; ar <= endAr; ar++)
		*ar *= r;
}
