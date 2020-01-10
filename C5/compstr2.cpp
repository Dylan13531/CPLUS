/*************************************************************************
    > File Name: compstr2.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 四  1/ 9 16:36:52 2020
 ************************************************************************/

#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string word = "?ate";
	for (char ch='a'; word != "mate"; ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends, word is " << word << endl;
	return 0;
}
