/*************************************************************************
    > File Name: test07.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 三  1/ 8 16:06:19 2020
 ************************************************************************/

#include <iostream>
#include <string>

struct PizzaAnalyze
{
	std::string CoopName;
	float Diameter;
	float Weight;
};

int main()
{
	using namespace std;
	PizzaAnalyze * test = new PizzaAnalyze;
	cout << "Enter the cooperation of the pizza: ";
	getline(cin,test->CoopName);
	cout << "Enter the diameter of the pizza: ";
	cin >> test->Diameter;
	cout << "Enter the weight of the pizza: ";
	cin >> test->Weight;
	cout << "Cooperation Name: " << test->CoopName << ", Diameter: " << test->Diameter
		<< ", Weight " << test->Weight << endl;
	delete test;
	return 0;
}
