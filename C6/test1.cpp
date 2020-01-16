/*************************************************************************
    > File Name: test1.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 六  1/11 14:22:47 2020
 ************************************************************************/

#include <iostream>
#include <cctype>

int main()
{
	using namespace std;
	char alpha;
	cout << "Enter text to transfer, and type @ to teminate input.\n ";
	cin.get(alpha);
	while(alpha != '@')
	{
		if (isalpha(alpha) && isupper(alpha))
			cout.put(tolower(alpha));
		else if (isalpha(alpha) && islower(alpha))
			cout.put(toupper(alpha));
		else
			cout << alpha;
		cin.get(alpha);
	}
	return 0;
}

