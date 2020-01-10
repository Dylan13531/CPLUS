/*************************************************************************
    > File Name: test7.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 五  1/10 12:25:14 2020
 ************************************************************************/

#include <iostream>
#include <string>


struct Car {
	std::string maker;
	int year;
};

int main()
{
	using namespace std;
	int num;
	cout << "How many cars do you wish to ctalog? ";
	cin >> num;
	cin.get();
	Car * numCar = new Car [num];
	for (int i=0; i<num; i++)
	{
		cout << "Car #"<< i+1 <<":" << endl;
		cout << "Please enter the make: ";
		getline(cin,numCar[i].maker);
		cout << "Please enter the year made: ";
		cin >> numCar[i].year;
		cin.get();
	}
	cout << "Here is your collection: " << endl;
	for (int i=0; i<num; i++)
		cout << numCar[i].year << " " << numCar[i].maker << endl;
	return 0;
}
