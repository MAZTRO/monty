#include "monty.h"

/**
  * push - Function that add an item to stack
  * @stack : pointer of input
  * @value : int of input
  **/

void push(stack_t **stack, char *value)
{
	stack_t *aux;
	stack_t *aux2;

	aux = malloc(sizeof(aux));
	aux2 = *stack;
	if (aux == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	aux->n = atoi(value);
	aux->prev = NULL;
	aux->next = NULL;
	if (*stack == NULL)
	{
		aux->next = (*stack);
		if(*stack)
		{
			(*stack)->prev = aux;
		}
	}
	else
	{
		if(*stack == NULL)
		{
			*stack = aux;
		}
		else
		{
			while (aux2->next != NULL)
			{
				aux2 = aux2->next;
			}
			aux2->next = aux;
			aux->prev = aux2;
		}
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
	stack_t *aux = *stack;

	value = value;
	if (!stack)
		exit(EXIT_SUCCESS);
	for (count = 0; aux != NULL; count++)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
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
 * @value : int of input
 * @stack : double pointer of input
 */

void pop(stack_t **stack, unsigned int value)
{
	stack_t *aux;

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
 * @stack : double pointer of input
 */

void swap(stack_t **stack, unsigned int value)
{
	stack_t *aux = *stack;
	stack_t *aux2 = (*stack)->next;
	int count = 0;

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
