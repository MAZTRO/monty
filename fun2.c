#include "monty.h"
/**
  * add - function that add  the top two elements of the stack.
  * @stack: double pointer of input
  * @line_number: Number of a line
  * @value: int of input
  **/
void add(stack_t **stack, unsigned int line_number, unsigned int value)
{
	int increase = 0;

	line_number = line_number;
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", value);
		exit(EXIT_FAILURE);
	}
	increase = (*stack)->n + (*stack)->next->n;
	pop(stack, line_number, value);
	(*stack)->n = increase;
}
/**
  * nop - The opcode nop doesnt do anything.
  * @stack: double pointer of input
  * @line_number: Number of a line
  * @value: int of input
  **/
void nop(stack_t **stack, unsigned int line_number, unsigned int value)
{
	stack = stack;
	line_number = line_number;
	value = value;
}
