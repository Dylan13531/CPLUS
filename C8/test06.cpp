/*************************************************************************
    > File Name: test06.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 二  1/21 18:17:20 2020
 ************************************************************************/

#include <iostream>
#include <cstring>

template<typename T>
T maxn(T * test, const int n);

template<>
char * maxn<char *>(char ** test,  const int n);


int main()
{
	using namespace std;
	int a[6] = {1,2,3,4,5,6};
	double b[4] = {2.29,10.2,7.3,9.3};
	char * test[] = {"hello", "What's your name?", "Oh","I am sorry"};
	cout << "Int: " << maxn(a,6) << endl;
	cout << "Double : " << maxn(b,4) << endl;
	cout << "char * : " << maxn(test,4) << endl;
	return 0;
}

template<typename T>
T maxn(T * test, const int n)
{
	T temp = test[0];
	for (int i=1; i<n; i++)
	{
		if (test[i] > temp)
			temp = test[i];
	}
	return temp;
}

template<>
char * maxn(char ** test, const int n)
{
	int num;
	int temp;
	int index;
	num = strlen(test[0]);
	index = 0;
	for (int i=0; i<n; i++)
	{
		temp = strlen(test[i]);
		if (num < temp)
		{
			num = temp;
			index = i;
		}
	}
	return test[index];
}
