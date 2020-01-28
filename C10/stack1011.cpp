/*************************************************************************
    > File Name: stack1011.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 二  1/28 17:38:46 2020
 ************************************************************************/

#include "stack1010.h"

Stack::Stack()
{
	top=0;
}

bool Stack::isempty() const
{
	return top==0;
}

bool Stack::isfull() const
{
	return top==MAX;
}

bool Stack::push(const Item & item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}

bool Stack::pop(Item & item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else
		return false;
}

