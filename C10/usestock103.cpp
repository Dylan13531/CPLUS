/*************************************************************************
    > File Name: usestock103.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 二  1/28 16:35:48 2020
 ************************************************************************/

#include<iostream>
#include"stock101.h"

int main()
{
	Stock fluffy_the_cat;
	fluffy_the_cat.acquire("NanoSmart", 20,12.50);
	fluffy_the_cat.show();
	fluffy_the_cat.buy(15,18.125);
	fluffy_the_cat.show();
	fluffy_the_cat.buy(400,20);
	fluffy_the_cat.show();
	fluffy_the_cat.buy(300000,40.125);
	fluffy_the_cat.show();
	fluffy_the_cat.sell(300000,0.125);
	fluffy_the_cat.show();
	return 0;
}
