#include "monty.h"
/**
  * free_all - function that free the memory of the stack
  * @stack: Estructure
  **/
void free_all(stack_t **stack)
{
	stack_t *head;

	while (*stack != NULL)
	{
		head = *stack;
		*stack = (*stack)->next;
		free(head);
	}
}
