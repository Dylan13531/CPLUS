/*************************************************************************
    > File Name: test2.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 五  1/17 17:17:59 2020
 ************************************************************************/

#include <iostream>
#include <array>

const int maxSize=10;
int fillArray(std::array<double,maxSize> *);
void showArray(const std::array<double,maxSize> *,int);
double avgArray(const std::array<double,maxSize> *, int);


int main()
{
	std::array<double,maxSize> scores;
	int numScore = fillArray(&scores);
	showArray(&scores,numScore);
	double avgScore = avgArray(&scores,numScore);
	std::cout << "The average score is " << avgScore << std::endl;
	return 0;
}

int fillArray(std::array<double,maxSize> * scores)
{
	using namespace std;
	int numScore=0;
	cout << "Enter the scores(q to quit): ";
	while ((cin>> (*scores)[numScore]) && (numScore++ < maxSize))
		cout << "Enter another score: ";
	return numScore;
}

void showArray(const std::array<double,maxSize> * scores,int numScore)
{
	using namespace std;
	cout << "The scores are: ";
	for (int i=0; i<numScore; i++)
		cout << (*scores)[i] << " ";
	cout << ".\n";
}

double avgArray(const std::array<double,maxSize> * scores, int numScore)
{
	double avgScore = 0;
	for (int i=0; i<numScore; i++)
		avgScore += (*scores)[i];
	avgScore = avgScore/numScore;
	return avgScore;
}
