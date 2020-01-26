/*************************************************************************
    > File Name: coordin901.h
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 六  1/25 16:36:00 2020
 ************************************************************************/

#ifndef __COORDIN__H
#define __COORDIN__H

struct polar
{
	double distance;
	double angle;
};

struct rect
{
	double x;
	double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif
