/*************************************************************************
    > File Name: test7.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 六  1/11 16:53:56 2020
 ************************************************************************/

#include <iostream>
#include <cctype>
#include <cstring>

int main()
{
	using namespace std;
	char word[20];
	cout << "Enter words (q to quit): ";
	int vowCount = 0;
	int conCount = 0;
	int otherCount = 0;
	cin >> word;
	while (!(word[0] == 'q' && strlen(word)==1))
	{
		cin.get();
		if(isalpha(word[0]))
		{
			switch(tolower(word[0]))
			{
				case 'a' : vowCount += 1; break;
				case 'e' : vowCount += 1; break;
				case 'i' : vowCount += 1; break;
				case 'o' : vowCount += 1; break;
				case 'u' : vowCount += 1; break;
				default: conCount += 1; break;
			}
		}
		else
			otherCount += 1;
		cin >> word;
	}

	cout << vowCount << "words beginning with vowels\n";
	cout << conCount << "words beginning with consonants\n";
	cout << otherCount << "words beginning with others\n";
	return 0;
}
