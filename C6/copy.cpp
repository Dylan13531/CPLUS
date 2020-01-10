/*************************************************************************
    > File Name: sumafile.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 五  1/10 18:05:49 2020
 ************************************************************************/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <cstring>

const int SIZE = 60;
int main()
{
	using namespace std;
	char filename[SIZE];
	ifstream inFile;
	cout << "Enter name of data file: ";
	cin.getline(filename,SIZE);
	inFile.open(filename);
	ofstream outFile;
	outFile.open(strcat("cpy_",filename));
	if (!inFile.is_open())
	{
		cout << "Could not open the file " << filename << endl;
		cout<< "Program terminating.\n";
		exit(EXIT_FAILURE);
	}
	double value;
	double sum=0.0;
	string nuLine;
	int count=0;

	getline(inFile,nuLine);
	outFile << nuLine;
	while (inFile.good())
	{
		++count;
		getline(inFile,nuLine);
		outFile << nuLine;
	}
	if (inFile.eof())
		cout << "End of file reached.\n";
	else if (inFile.fail())
		cout << "Input terminated by data mismatch.\n";
	else
		cout << "Input terminated for unknown reason.\n";
	if (count==0)
		cout << "No data processed.\n";
	else
	{
		cout << "Items read: " << count << endl;
	}
	inFile.close();
	outFile.close();
	return 0;
}
