/*************************************************************************
    > File Name: limits.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 日 12/29 18:46:12 2019
 ************************************************************************/

#include <iostream>
#include <climits>

int main()
{
	using namespace std;
	int nInt = INT_MAX;
	short nShort = SHRT_MAX;
	long nLong = LONG_MAX;
	long long nLlong = LLONG_MAX;
	wchar_t wChar = L'P';
	float nFloat = 2.3;
	double nDouble = 2.3;
	long double nLDouble = 3.3;

	cout << "int is " << sizeof(nInt) << " bytes." << endl;
	cout << "short is " << sizeof(nShort) << " bytes." << endl;
	cout << "long is " << sizeof(nLong) << " bytes." << endl;
	cout << "long long is " << sizeof(nLlong) << " bytes." << endl;
	cout << "wchar_t is " << sizeof(wChar) << " bytes." << endl;
	cout << "float is " << sizeof(nFloat) << " bytes." << endl;
	cout << "nDouble is " << sizeof(nDouble) << " bytes." << endl;
	cout << "nLDouble is " << sizeof(nLDouble) << " bytes." << endl;
	cout << endl;

	cout << "Maximum values:" << endl;
	cout << "int: " << nInt << endl;
	cout << "unsigned int: " << UINT_MAX << endl;
	cout << "short: " << nShort << endl;
	cout << "unsigned short: " << USHRT_MAX << endl;
	cout << "long: " << nLong << endl;
	cout << "unsigned long: " << ULONG_MAX << endl;
	cout << "long long is: " << nLlong << endl;
	cout <<"unsigned long long: " << ULLONG_MAX << endl;
	cout << endl;

	cout << "Minimum int value = " << INT_MIN << endl;
	cout << "Bits per byte = " << CHAR_BIT << endl;
	return 0;
}
