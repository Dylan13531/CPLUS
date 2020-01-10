/*************************************************************************
    > File Name: equal.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 三  1/ 8 20:06:12 2020
 ************************************************************************/

#include <iostream>

int main()
{
	using namespace std;
	int quizscores[10]=
	{
		20,20,20,20,20,20,20,20,20,20
	};

	cout << "Doing it right:\n";
	int i;
	for (i=1;quizscores[i]==20; i++)
		cout << "quiz " << " is a 20\n";

	cout << "Doing it dangerously wrong:\n";

	return 0;
}
