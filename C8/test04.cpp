/*************************************************************************
    > File Name: test04.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 二  1/21 17:49:43 2020
 ************************************************************************/
#include <iostream>
#include <cstring>
using namespace std;
struct stringy{
	char * str;
	int ct;
};
void show(const stringy &,const int n=1);
void show(const char *,const int n=1);
void set(stringy & , const char *);
int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing);
	show(beany);
	show(beany,2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing,3);
	show("Done!");
	delete [] beany.str;
	return 0;
}
void show(const stringy & beany, const int n)
{
	for (int i=0; i<n; i++)
	{
		cout << "The String : " << beany.str << endl;
		cout << "The length: " << beany.ct << endl;
	}
}
void show(const char * test, const int n)
{
	for(int i=0; i<n; i++)
		cout << test << endl;
}
void set(stringy & beany, const char * test)
{	
	int num = strlen(test);
	char * meStr = new char [num+1];
	for (int i = 0; i<num; i++)
		meStr[i] = test[i];
	meStr[num] = '\0';
	beany.str = meStr;
	beany.ct = num;
}
