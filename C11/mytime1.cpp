/*************************************************************************
    > File Name: mytime0.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 三  1/29 18:00:11 2020
 ************************************************************************/

#include<iostream>
#include "mytime1.h"

Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}

void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes/60;
	minutes %= 60;
}

void Time::AddHr(int n)
{
	hours += n;
}

void Time::Reset(int h, int m)
{
	hours = h;
	minutes = m;
}

Time Time::operator + (const Time & t) const
{
	Time sum;
	sum.hours = hours + t.hours;
	sum.minutes = minutes + t.minutes;
	sum.hours += sum.minutes/60;
	sum.minutes %= 60;
	return sum;
}

void Time::Show() const
{
	std::cout << hours << " hours, " << minutes << " minutes";
}
