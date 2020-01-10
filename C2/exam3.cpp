/*************************************************************************
    > File Name: exam3.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 六 12/28 17:49:19 2019
 ************************************************************************/

#include <iostream>
void sentenceOne();
void sentenceTwo();

int main()
{
	sentenceOne();
	sentenceOne();
	sentenceTwo();
	sentenceTwo();
}


void sentenceOne()
{
	std::cout << "Three blind mice"<<std::endl;
}

void sentenceTwo()
{
	std::cout << "See how they run"<<std::endl;
}
