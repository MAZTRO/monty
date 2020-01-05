#include "monty.h"
/**
  *
  *
  *
  **/
void free_all(FILE *ID, stack_t **stack)
{
	stack_t *current;

	fclose(ID);
	while (*stack != NULL)
	{
		current = *stack;
		*stack = (*stack)->next;
		free(current);
	}
	exit(EXIT_FAILURE);
}
/**
  *
  *
  *
  *
  **/
void free_other(FILE *ID, stack_t **stack)
{
	stack_t *current;

	fclose(ID);
	while (*stack != NULL)
	{
		current = *stack;
		*stack = (*stack)->next;
		free(current);
	}
	exit(EXIT_FAILURE);
}
