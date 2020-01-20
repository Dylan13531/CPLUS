/*************************************************************************
    > File Name: testPointer.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 四  1/16 16:59:36 2020
 ************************************************************************/

#include <iostream>

int main()
{
	using namespace std;
	int ** arr;
	arr = new int * [3];
	for (int i=0; i<3; i++)
	{
		arr[i] = new int  [2];
		for (int j=0; j<2; j++)
			arr[i][j] = 0;
	}
	cout << arr << endl;
	cout << *arr << endl;
	cout << **arr << endl;
	for(int i=0; i<3; i++)
		delete [] arr[i];
	delete [] arr;
	return 0;
}
