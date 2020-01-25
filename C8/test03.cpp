/*************************************************************************
    > File Name: test03.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 二  1/21 17:02:54 2020
 ************************************************************************/

#include <iostream>
#include <string>
#include <cstring>

using namespace std;
void StringUp(string & s1);


int main()
{
	string sts;
	int stl;
	cout << "Enter a string (q to quit): ";
	getline(cin,sts);
	while(sts != "q")
	{
		StringUp(sts);
		cout << sts;
		cout << endl;
		cout << "Enter a string (q to quit): ";
		getline(cin,sts);
	}
	return 0;
}

void StringUp(string & sts)
{
	int stlen = sts.size();
	for (int i=0; i<stlen; i++)
		sts[i] = toupper(sts[i]);
}
