#include "monty.h"

/**
  * push - Function that add an item to stack
  * @stack : pointer of input
  * @value : int of input
  **/

void push(stack_t **stack, unsigned int value)
{
	stack_t *aux;

	aux = malloc(sizeof(aux));
	if (aux == NULL)
		exit(EXIT_FAILURE);
	if (*stack == NULL)
	{
		*stack = aux;
		(*stack)->prev = NULL;
		(*stack)->next = NULL;
		(*stack)->n = value;
	}
	else
	{
		aux->next = *stack;
		(*stack)->prev = aux;
		aux->prev = NULL;
		aux->n = value;
		*stack = aux;
	}
}

/**
 * pall - Function that print date in the screen
 * @stack : pointer of input
 * @value :  int of input
 * @stack: double pointer of input
 */

void pall(stack_t **stack, unsigned int value)
{
	size_t count = 0;

	value = value;
	if (!stack)
		exit(EXIT_SUCCESS);
	for (count = 0; *stack != NULL; count++)
	{
		printf("%d\n", (*stack)->n);
		*stack = (*stack)->next;
	}
}

/**
 * pint - Function that print date in the screen
 * @stack : pointer of input
 * @value : int of input
 * @stack : double pointer of input
 */

void pint(stack_t **stack, unsigned int value)
{
	if (!stack)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", value);
		exit(EXIT_FAILURE);
	}
	else
		printf("%d\n", (*stack)->n);
}

/**
 * pop - Function that remove the top element of the stack
 * @stack : pointer of input
 * @value : int of input
 * @stack : double pointer of input
 */

void pop(stack_t **stack, unsigned int value)
{
	stack_t *aux;

	if (stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", value);
		exit(EXIT_FAILURE);
	}
	else
	{
		aux = *stack;
		*stack = aux->next;
		aux->next = NULL;
		(*stack)->prev = NULL;
		free(aux);
	}
}

/**
 * swap - Function that print date in the screen
 * @value : int of input
 * @stack : double pointer of input
 */

void swap(stack_t **stack, unsigned int value)
{
	stack_t *aux = NULL;
	int temp = 0, count = 0;

	while ((*stack)->next != NULL)
	{
		*stack = (*stack)->next;
		count++;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", value);
		exit(EXIT_FAILURE);
	}
	else
	{
		aux = aux->next;
		temp = aux->n;
		aux->n = (*stack)->n;
		(*stack)->n = temp;
	}
}
