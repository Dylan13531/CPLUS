/*************************************************************************
    > File Name: usetime3.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 四  1/30 15:45:21 2020
 ************************************************************************/

#include <iostream>
#include "mytime3.h"

int main()
{
	using std::cout;
	using std::endl;

	Time aida(3, 35);
	Time tosca(2, 48);
	Time temp;

	cout << "Aida and Tosca:\n";
	cout << aida << "; " << tosca << endl;
	temp = aida + tosca;
	cout << "Aida + Tosca: " << temp << endl;
	temp = aida * 1.17;
	cout << "Aida * 1.17: " << temp << endl;
	cout << "10.0 * Tosca: " << 10.0 * tosca << endl;

	return 0;
}

