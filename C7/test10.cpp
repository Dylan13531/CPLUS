/*************************************************************************
    > File Name: test10.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 一  1/20 18:04:45 2020
 ************************************************************************/

#include <iostream>

const double calculate(const double(*p)(const double,const double),const double,const double);
const double add(const double, const double);
const double mul(const double, const double);
const double min(const double, const double);


int main()
{
	using namespace std;
	const double (*p[3])(const double, const double) ={ add,mul,min };
	char * name[3] ={ "add", "mul","min" };
	double a,b;
	double re;
	for(int i=0; i<3; i++)
	{
		cout << name[i] << ":" << endl;
		cout << "Enter the number: ";
		cin >> a >> b;
		re = calculate(p[i],a,b);
		cout << "Result: " << re << endl;
	}
	return 0;
}


const double calculate(const double (*p)(const double, const double),const double a, const double b)
{
	return p(a,b);
}

const double add(const double a, const double b)
{
	return a+b;
}

const double mul(const double a, const double b)
{
	return a*b;
}

const double min(const double a, const double b)
{
	return a-b;
}
