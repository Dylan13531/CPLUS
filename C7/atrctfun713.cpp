/*************************************************************************
    > File Name: atrctfun.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 四  1/16 17:23:23 2020
 ************************************************************************/

#include <iostream>
#include <cmath>

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

void rect_to_polar(const rect * pxy, polar * pda);
void show_polar(const polar * pda);

int main()
{
	using namespace std;
	rect rplace;
	polar pplace;

	cout << "Enter the x and y values: ";
	while (cin >> rplace.x >> rplace.y)
	{
		rect_to_polar(&rplace,&pplace);
		show_polar(&pplace);
		cout << "Next two numbers (q to quit): ";
	}
	cout << "Done.\n";
	return 0;
}

void rect_to_polar(const rect * pxy, polar * pad)
{
	using namespace std;

	pad->distance = sqrt(pxy->x*pxy->x+pxy->y*pxy->y);
	pad->angle = atan2(pxy->y,pxy->x);
}


void show_polar(const polar * dapos)
{
	using namespace std;
	const double Rad_to_deg = 57.29577951;

	cout << "distance = " << dapos->distance;
	cout << ", angle = " << dapos->angle*(Rad_to_deg);
	cout << "degrees\n";
}
