#include "monty.h"
/**
  * add - function that add  the top two elements of the stack.
  * @stack: double pointer of input
  * @line_number: int of input
  **/
void add(stack_t **stack, unsigned int value)
{
	int increase = 0;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", value);
		exit(EXIT_FAILURE);
	}
	increase = (*stack)->n + (*stack)->next->n;
	pop(stack, value);
	(*stack)->n = increase;
}
/**
  * nop - The opcode nop doesnt do anything.
  8 @stack: double pointer of input
  * @line_number: int of input
  **/
void nop(stack_t **stack, unsigned int value)
{
	stack = stack;
	value = value;
}
