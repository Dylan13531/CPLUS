/*************************************************************************
    > File Name: mytime0.h
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 三  1/29 17:45:54 2020
 ************************************************************************/

#ifndef MYTIME0_H_
#define MYTIME0_H_

class Time
{
	private:
		int hours;
		int minutes;
	public:
		Time();
		Time(int h, int m=0);
		void AddMin(int m);
		void AddHr(int n);
		void Reset(int h=0, int m=0);
		Time Sum(const Time & t) const;
		void Show() const;
};

#endif

