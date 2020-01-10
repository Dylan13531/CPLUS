/*************************************************************************
    > File Name: exam4.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 六 12/28 17:53:27 2019
 ************************************************************************/

#include <iostream>

int calMonth(int);

int main()
{

	using namespace std;
	int age;
	int months;
	cout << "Enter your age: ";
	cin >> age;
	months = calMonth(age);
	cout << "Your age contains "<< months << " months." << endl;
	return 0;
}


int calMonth(int age)
{
	return age*12;
}
