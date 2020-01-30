/*************************************************************************
    > File Name: stonewt.h
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 四  1/30 17:31:54 2020
 ************************************************************************/

#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt
{
	private:
		enum {Lbs_per_stn = 14};
		int stone;
		double pds_left;
		double pounds;

	public:
		Stonewt(double lbs);
		Stonewt(int stn, double lbs);
		Stonewt();
		~Stonewt();
		operator int () const;
		operator double () const;
		void show_lbs() const;
		void show_stn() const;
};
#endif
