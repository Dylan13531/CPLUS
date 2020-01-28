/*************************************************************************
    > File Name: stacker1012.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 二  1/28 17:43:58 2020
 ************************************************************************/

#include <iostream>
#include <cctype>
#include "stack1010.h"

int main()
{
	using namespace std;
	Stack st;
	char ch;
	unsigned long po;
	cout << "Please enter A to add a purchase order, \n"
		<< "p to process a PO, or Q to quit.\n";
	while (cin >> ch && toupper(ch) != 'Q')
	{
		while(cin.get() !='\n')
			continue;
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch(toupper(ch))
		{
			case 'A': cout << "Enter a PO number to add: ";
					  cin >> po;
					  if (st.isfull())
						  cout << "stack already full\n";
					  else
						  st.push(po);
					  break;
			case 'P': if(st.isempty())
						  cout << "stack already empty\n";
					  else
					  {
						  st.pop(po);
						  cout << "PO #" << po << " popped\n";
					  }
					  break;
		}
		cout << "Please enter A to add a purchase order,\n"
			<< "p to process a PO, or Q to quit.\n";
	}
	cout << "Bye\n";
	return 0;
}
			
