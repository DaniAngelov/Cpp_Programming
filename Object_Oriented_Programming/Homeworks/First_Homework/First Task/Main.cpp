#include "IntStack.h"

int main()
{

	IntStack *stack = new IntStack();
	stack->push(4);
	stack->push(20);
	stack->push(10);
	stack->push(5);
	SortStack(*stack);
	stack->print();

	

	system("pause");
	return 0;
}