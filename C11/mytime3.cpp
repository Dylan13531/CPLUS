/*************************************************************************
    > File Name: mytime0.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 三  1/29 18:00:11 2020
 ************************************************************************/

#include<iostream>
#include "mytime3.h"

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

Time Time::operator - (const Time & t) const
{
	Time min;
	int totm1,totm2;
	int minm;
	totm1 = hours*60 + minutes;
	totm2 = t.hours*60 + t.minutes;
	minm = totm1 - totm2;
	min.hours = minm/60;
	min.minutes = minm%60;
	return min;
}

Time Time::operator * (double mult) const
{
	Time result;
	long totalminutes = hours*mult*60+minutes*mult;
	result.hours = totalminutes/60;
	result.minutes = totalminutes%60;
	return result;
}


void Time::Show() const
{
	std::cout << hours << " hours, " << minutes << " minutes";
}

std::ostream & operator << (std::ostream & os, const Time & T)
{
	os << T.hours << " hours, " << T.minutes << " minutes";
	return os;
}
