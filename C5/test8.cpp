/*************************************************************************
    > File Name: test8.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 五  1/10 12:52:56 2020
 ************************************************************************/

#include <iostream>

int main()
{
	using namespace std;
	char word[20]="";
	int count=0;
	cout << "Enter words (to stop, type the word done):" << endl;
	while (strcmp(word,"Done")!=0)
	{
		cin.getline(word,20);
		count ++;
	}
	cout << "You entered a total of " << count-1 <<  " words." << endl;
	return 0;
}
