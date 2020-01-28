/*************************************************************************
    > File Name: stack1010.h
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 二  1/28 17:36:27 2020
 ************************************************************************/

#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack
{
	private:
		enum{MAX=10};
		Item items[MAX];
		int top;
	public:
		Stack();
		bool isempty() const;
		bool isfull() const;
		bool push(const Item & item);
		bool pop(Item & item);
};
#endif
