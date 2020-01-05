#include "monty.h"

/**
 * free_all - Free a listint_t list
 * @stack: pointer to head of list
 * @ID: File to close
 * Return: Nothing.
 */

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
    exit(EXIT_SUCCESS);
}

/**
 * free_other - Free a listint_t list
 * @stack: pointer to head of list
 * @ID: File to close
 * Return: Nothing.
 */

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
    exit(EXIT_SUCCESS);
}
