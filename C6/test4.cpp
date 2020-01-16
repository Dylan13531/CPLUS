/*************************************************************************
    > File Name: test4.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 六  1/11 15:50:01 2020
 ************************************************************************/

#include <iostream>
#include <cctype>

const int strsize=20;
struct bop
{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;
};

void ShowAllMembers(bop * ,int ,int );
void ShowMenu()
{
	using namespace std;
	cout << "a. display by name\t\tb.display by title\n";
	cout << "c. display by popname\t\td.display by preference\n";
	cout << "q. quit\n";
}

int main()
{
	using namespace std;
	char choice;
	bop members[5]=
	{
		{"Wimp Macho","leader","Wimp Macho",1},
		{"Raki Rhodes","Phd","Junoor Programmer",2 },
		{"Cellia Laiter","Professor","MIPS",3 },
		{"Hoppy Hipman", "Undergraduate","Analyst Trainee",1 },
		{"Pat Hand", "Researcher","LOOPY",2 }
	};
	ShowMenu();
	cout << "Enter your choice(q to quit): ";
	while(cin.get(choice)&&choice != 'q')
	{
		cin.get();
		switch(tolower(choice))
		{
			case 'a': ShowAllMembers(members,5,1);break;
			case 'b': ShowAllMembers(members,5,2);break;
			case 'c': ShowAllMembers(members,5,3);break;
			case 'd': ShowAllMembers(members,5,4);break;
			default:	cout <<  "Enter your choice(a,b,c,d): ";
		};
	}
}

void ShowByNum(bop member,int n)
{
	using namespace std;
	switch(n)
	{
		case 1: cout << member.fullname << endl; break;
		case 2: cout << member.title << endl;break;
		case 3: cout << member.bopname << endl;break;
		case 4: ShowByNum(member,member.preference);break;
	};
}

void ShowAllMembers(bop * members,int m,int n)
{
	for (int i=0; i<m; i++)
		ShowByNum(members[i],n);
	std::cout << "Enter your choice(q to quit): ";
}
