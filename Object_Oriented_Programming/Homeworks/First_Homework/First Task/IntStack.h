#pragma once
#include <iostream>
using namespace std;

struct node
{
	int value = 0;
	node* prev = nullptr;
	node(int value, node* prev)
	{
		this->prev = prev;
		this->value = value;
	}
};

class IntStack
{
private:

	node* top = nullptr;
	node* nodes = nullptr;

public:
	int pop();
	int peek();
	void push(int value);
	bool isEmpty();
	void print();

	IntStack();
	IntStack(node* top, node* nodes);
	IntStack(IntStack& stack);
	~IntStack();

	friend void SortStack(IntStack&);
};
