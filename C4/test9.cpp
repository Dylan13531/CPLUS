/*************************************************************************
    > File Name: test6.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 三  1/ 8 15:57:31 2020
 ************************************************************************/

#include <iostream>

struct CandyBar
{
	char BrandName[20];
	float Weight;
	int Caloria;
};

int main()
{
	using namespace std;
	CandyBar * stcArray = new CandyBar [3];
	*stcArray= {
			"Da BaiTu",2.1,460
		};

	*(stcArray+1) = {
			"Chocolate", 2.5, 780
		};

	*(stcArray+2) = {
			"ShiLiJia",4.5, 3800
		};

	cout << "1、BrandName: " << stcArray[0].BrandName << ", Weight: " << stcArray[0].Weight 
		<< ", Caloria: " << stcArray[0].Caloria << endl;
	cout << "2、BrandName: " << stcArray[1].BrandName << ", Weight: " << stcArray[1].Weight 
		<< ", Caloria: " << stcArray[1].Caloria << endl;
	cout << "3、BrandName: " << stcArray[2].BrandName << ", Weight: " << stcArray[2].Weight 
		<< ", Caloria: " << stcArray[2].Caloria << endl;
	
	return 0;
}
