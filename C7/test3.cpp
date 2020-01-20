/*************************************************************************
    > File Name: test3.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 五  1/17 17:42:22 2020
 ************************************************************************/

#include <iostream>
#include <ctime>
#include <unistd.h>

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void waitM(int secs);
void showBox(const box);
void setVolm(box *);
void setValu(box *);


int main()
{
	using namespace std;
	box hassy;
	setValu(&hassy);
	setVolm(&hassy);
	showBox(hassy);
	return 0;
}
void setValu(box * sBox)
{
	using namespace std;
	cout << "Enter the maker: ";
	cin.get(sBox->maker,40).get();
	cout << "Enter the height: ";
	cin >> sBox->height;
	cout << "Enter the width: ";
	cin >> sBox -> width;
	cout << "Enter the length: ";
	cin >> sBox -> length;
}

void setVolm(box * sBox)
{
	using namespace std;
	std::cout << "Calculating the Volumne ";
	std::cout << "\nWaiting ";
	int i=0;
	while (i < 20)
	{
		if (i%5 == 0)
			cout << endl;
		cout << ". ";
		fflush(stdout);
		waitM(1);
		i++;
	}
	sBox->volume = sBox->height * sBox->width * sBox->length;
}

void showBox(box sBox)
{
	using namespace std;
	cout << endl;
	cout << "The width: " << sBox.width << ", the height: " << sBox.height
		<< ", the lenght: " << sBox.length << ", the volume: " << sBox.volume;
	cout << endl;
}

void waitM(int secs)
{
	clock_t delay = secs*CLOCKS_PER_SEC;
	clock_t start = clock();
	while(clock() - start < delay);
}
