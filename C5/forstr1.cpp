/*************************************************************************
    > File Name: forstr1.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 三  1/ 8 18:58:12 2020
 ************************************************************************/

#include<iostream>
#include<string>

int main()
{
	using namespace std;
	cout << "Enter a word: ";
	string word;
	cin >> word;

	for (int i=word.size()-1; i>=0; i--)
		cout << word[i];
	cout << "\nBye.\n";
	return 0;
}
