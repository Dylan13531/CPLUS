/*************************************************************************
    > File Name: condit609.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 五  1/10 16:51:20 2020
 ************************************************************************/

#include <iostream>
int main()
{
	using namespace std;
	int a,b;
	cout << "Enter two integers: ";
	cin >> a >> b;
	cout << "The larger of " << a << " and " << b;
	int c = a > b? a:b;
	cout << " is " << c << endl;
	return 0;
}
