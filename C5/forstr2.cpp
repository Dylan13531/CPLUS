/*************************************************************************
    > File Name: forstr2.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 三  1/ 8 19:58:26 2020
 ************************************************************************/

#include<iostream>
#include<string>

int main()
{

	using namespace std;
	cout << "Enter a word: ";
	string word;
	cin >> word;

	char temp;
	int i,j;
	for (j=0,i=word.size()-1; j<i; --i,++j)
	{
		temp=word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word << "\nDone\n";
	return 0;
}
