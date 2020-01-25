/*************************************************************************
    > File Name: test05.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 二  1/21 18:09:43 2020
 ************************************************************************/

#include <iostream>

template<typename T>
T max5(T *);

int main()
{
	using namespace std;
	int a[5] = {1,2,3,4,5};
	double b[5] = {3.14,2.29,10.2,7.3,9.3};
	cout << "Int: " << max5(a) << endl;
	cout << "Double : " << max5(b) << endl;
	return 0;
}

template<typename T>
T max5(T * test)
{
	T temp = test[0];
	for (int i=1; i<5; i++)
	{
		if (test[i] > temp)
			temp = test[i];
	}
	return temp;
}

