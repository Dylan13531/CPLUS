/*************************************************************************
    > File Name: test03.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 一  1/27 16:27:37 2020
 ************************************************************************/

#include <iostream>
#include "chaff.h"

const int N=1024;
const int M=5;
char buff[N];

int main()
{
	using namespace std;
	chaff * bufcf = new (buff) chaff [M]
	{
		{"Lily",0}, {"John",1}, {"Mary",2}, {"Harry",3}, {"Tom",4}
	};
	chaff * norcf = new chaff [M]
	{
		{"Lily",0}, {"John",1}, {"Mary",2}, {"Harry",3}, {"Tom",4}
	};
	cout << "The first allocate:" << endl;
	cout << "The buff address:		The normal address: " << endl;
	for(int i=0; i<M; i++)
		cout << &bufcf[i] << '\t' << &norcf[i] << endl;

	cout << endl;
	delete [] norcf;
	chaff * bafcf = new(buff+M*sizeof(chaff)) chaff [M]
	{
		{"Lily",0}, {"John",1}, {"Mary",2}, {"Harry",3}, {"Tom",4}
	};
	chaff * nafcf = new chaff [M]
	{
		{"Lily",0}, {"John",1}, {"Mary",2}, {"Harry",3}, {"Tom",4}
	};
	cout << "The second allocate:" << endl;
	for(int i=0; i<M; i++)
		cout << &bafcf[i] << '\t' << &nafcf[i] << endl;
	delete [] nafcf;
	return 0;
}
