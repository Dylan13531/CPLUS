/*************************************************************************
    > File Name: test8.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 六  1/11 17:17:06 2020
 ************************************************************************/

#include <iostream>
#include <fstream>
#include <string>

int main()
{
	using namespace std;
	ifstream inPut;
	string filename;
	cout << "Enter the file name to read: ";
	getline(cin,filename);
	inPut.open(filename);
	if (!inPut.is_open())
	{
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}
	char c;
	int num=0;
	c = inPut.get();
	while (inPut.good())
	{
		num++;
		c = inPut.get();
	}
	if (inPut.eof())
		cout << "End of file reached.\n";
	else if(inPut.fail())
		cout << "Input terminated by data mismatch.\n";
	else
		cout << "Input terminated for unknown reason.\n";
	cout << "There are " << num << " character in file " << filename << endl;
}
