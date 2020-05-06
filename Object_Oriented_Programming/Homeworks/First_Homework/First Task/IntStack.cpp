#include "IntStack.h"

bool IntStack::isEmpty()
{
	if (top == nullptr) return true;
	else return false;
}

int IntStack::peek()
{
	if (!isEmpty())
	 return top->value;
}

int IntStack::pop()
{
	int returnValue = 0;
	if (!isEmpty())
	{
		returnValue = top->value;
		node* temp = top->prev;
		delete top;
		top = temp;
	}
	return returnValue;
}

void IntStack::push(int value)
{
	if (!isEmpty())
	{
		node* newNode = new node(value, top);
		top = newNode;
	}
	else
	{
		node* newNode = new node(value,nullptr);
		top = newNode;
	}
}

void IntStack::print()
{
	while (!isEmpty())
	{
		cout << top->value << " ";
		pop();
	}
}

	IntStack::IntStack() {};

	IntStack::IntStack(node * top, node* nodes)
	{
		int k = 0;
		while (!isEmpty())
		{
			this->nodes[k] = nodes[k];
			k++;
		}
	}
	IntStack::IntStack(IntStack & st)
	{
		int k = 0;
		while (!isEmpty())
		{
			this->nodes[k] = st.nodes[k];
			k++;
		}
	}
	IntStack::~IntStack()
	{
		pop();
	}

	void SortStack(IntStack & stack)
	{
		IntStack* newstack = new IntStack();
		int size = 0;
		while (stack.isEmpty() == false)
		{
			newstack->push(stack.peek());
			stack.pop();
			size++;
		}
		int* arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = newstack->pop();
		}

		int temp2 = 0;
		for (int i = 1; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (arr[i] < arr[j])
				{
					temp2 = arr[j];
					arr[j] = arr[i];
					arr[i] = temp2;
				}
			}
		}
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		for (int i = 0; i < size; i++)
		{
			newstack->push(arr[i]);
		}
	}