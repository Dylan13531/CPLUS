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
		Time operator + (const Time & t) const;
		Time operator - (const Time & t) const;
		Time operator * (double n) const;
		friend Time operator * (double n, const Time & t)
		{return t*n;};
		friend std::ostream & operator << (std::ostream & os, const Time & T);
		void Show() const;
};

#endif

