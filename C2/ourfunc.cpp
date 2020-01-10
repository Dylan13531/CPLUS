/*************************************************************************
    > File Name: ourfunc.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 六 12/28 17:30:39 2019
 ************************************************************************/

#include <iostream>

void simon(int);

int main()
{
	using namespace std;
	simon(3);
	cout << "pick an integer: ";
	int count;
	cin >> count;
	simon(count);
	cout << "Done!" << endl;
	return 0;
}


void simon(int n)
{
	using namespace std;
	cout << "Simon says touch your toes " << n << " times." << endl;

}
