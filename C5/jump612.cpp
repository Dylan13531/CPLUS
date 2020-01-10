/*************************************************************************
    > File Name: jump612.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 五  1/10 17:17:07 2020
 ************************************************************************/

#include <iostream>
const int ArSize=80;

int main()
{
	using namespace std;
	char line[ArSize];
	int spaces=0;

	cout << "Enter a line of text:\n";
	cin.get(line,ArSize);
	cout << "Complete line:\n" << line << endl;
	cout << "Line throght first period:\n";
	for (int i=0; line[i]!='\0';i++)
	{
		cout << line[i];
		if (line[i] == '.')
			break;
		if (line[i] != ' ')
			continue;
		spaces++;
	}
	cout << "\n" << spaces << " spaces\n";
	cout << "Done.\n";
	return 0;
}
