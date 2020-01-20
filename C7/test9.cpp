/*************************************************************************
    > File Name: test9.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 一  1/20 17:29:21 2020
 ************************************************************************/

#include <iostream>

using namespace std;
const int SLEN=30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student);
void display2(const student * ps);
void display3(const student pa[], int n);

int main()
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;

	student * ptr_stu=new student[class_size];
	int entered=getinfo(ptr_stu, class_size);
	for (int i=0; i<entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu,entered);
	delete [] ptr_stu;
	cout << "Done\n";
	return 0;
}

int getinfo(student pa[], int n)
{
	int i=0;
	while(i<n)
	{
		cout << "#" << i+1 << ":Enter the name: ";
		cin.get(pa[i].fullname,SLEN).get();
		if (pa[i].fullname[0]=='\0')
			break;
		cout << "#" << i+1;
		cout << ":Enter the hobby: ";
		cin.get(pa[0].hobby,SLEN).get();
		cout << "#" << i+1;
		cout << ":Enter the opplevel: ";
		while (!(cin >> pa[0].ooplevel))
		{
			while (cin.get() != '\n')
				continue;
			cout << "#" << i+1;
			cout << ":Enter the opplevel: ";
		}
		cin.get();
		i++;
	}
	return i;
}

void display1(student st)
{
	cout << endl;
	cout << "Name: " << st.fullname << endl;
	cout << "Hobby: " << st.hobby << endl;
	cout << "Ooplevel: " << st.ooplevel << endl;
}


void display2(const student * st)
{
	cout << endl;
	cout << "Name: " << st->fullname << endl;
	cout << "Hobby: " << st->hobby << endl;
	cout << "Ooplevel: " << st->ooplevel << endl;
}

void display3(const student  st[], int n)
{
	for (int i=0; i<n; i++)
	{
		cout << endl;
		cout << "#" << i+1 << ":";
		cout << "Name: " << (st+i)->fullname << endl;
		cout << "#" << i+1 << ":";
		cout << "Hobby: " << (st+i)->hobby << endl;
		cout << "#" << i+1 << ":";
		cout << "Ooplevel: " << (st+i)->ooplevel << endl;
	}
}
