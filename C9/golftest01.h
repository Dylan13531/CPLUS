/*************************************************************************
    > File Name: golftest01.h
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 一  1/27 14:34:00 2020
 ************************************************************************/

const int Len=40;
struct golf
{
	char fullname[Len];
	int hadicap;
};

void setgolf(golf & g, const char * name, int hc);

int setgolf(golf & g);

void handicap(golf & g, int hc);

void showgolf(const golf & g);
