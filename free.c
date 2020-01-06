#include "monty.h"
/**
  * free_all - function that free the memory of the stack
  * @stack: Estructure
  **/
void free_all(stack_t *stack)
{
	stack_t *current;

	while (stack != NULL)
	{
		current = stack->next;
		free(stack);
		stack = current;
	}
}
