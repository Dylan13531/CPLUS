/*************************************************************************
    > File Name: calling701.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 四  1/16 14:44:47 2020
 ************************************************************************/

#include <iostream>

void simple();

int main()
{
	using namespace std;
	cout << "main() will call the simple() function:\n";
	simple();
	cout << "main() is finished with the simple() function.\n";
	return 0;
}

void simple()
{
	using namespace std;
	cout << "I'm but a simple function.\n";
}
