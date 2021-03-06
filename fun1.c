#include "monty.h"

/**
  * push - Function that add an item to stack
  * @stack : pointer of input
  * @line_number: Number of a line
  * @value : int of input
  **/

void push(stack_t **stack, unsigned int line_number, unsigned int value)
{
	stack_t *aux;
	unsigned int data = 0;

	aux = malloc(sizeof(aux));
	if (aux == NULL)
	{
		data = 1;
		case_error_1(stack, line_number, data);
	}
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
 * @line_number: Number of a line
 * @value :  int of input
 * @stack: double pointer of input
 */

void pall(stack_t **stack, unsigned int line_number, unsigned int value)
{
	size_t count = 0;
	stack_t *aux = *stack;

	line_number = line_number;
	value = value;
	if (!stack)
		exit(EXIT_SUCCESS);
	for (count = 0; aux->next != NULL; count++)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
	}
}

/**
 * pint - Function that print date in the screen
 * @stack : pointer of input
 * @line_number: Number of a line
 * @value : int of input
 * @stack : double pointer of input
 */

void pint(stack_t **stack, unsigned int line_number, unsigned int value)
{
	line_number = line_number;
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", value);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}

/**
 * pop - Function that remove the top element of the stack
 * @stack : pointer of input
 * @line_number: Number of a line
 * @value : int of input
 * @stack : double pointer of input
 */

void pop(stack_t **stack, unsigned int line_number, unsigned int value)
{
	stack_t *aux;

	line_number = line_number;
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", value);
		exit(EXIT_FAILURE);
	}
	aux = *stack;
	if (aux->next)
	{
		aux->next->prev = NULL;
	}
	*stack = aux->next;
	free(aux);
}

/**
 * swap - Function that print date in the screen
 * @value : int of input
 * @line_number: Number of a line
 * @stack : double pointer of input
 */

void swap(stack_t **stack, unsigned int line_number, unsigned int value)
{
	stack_t *aux = *stack;
	stack_t *aux2 = (*stack)->next;
	int count = 0;

	line_number = line_number;
	if (stack == NULL || *stack == NULL || aux2 == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", value);
		exit(EXIT_FAILURE);
	}

	aux2 = (*stack)->next;
	count = aux->n;
	aux->n = aux2->n;
	aux2->n = count;
}
