#include "monty.h"
/**
  * push - Function that add an item to stack
  * @stack : pointer of input
  * @item: int of input
  **/
void push(stack_t **stack, unsigned int value)
{
	stack_t *aux;

	aux = malloc(sizeof(aux));
	if (aux == NULL)
	{
		return (EXIT_FAILURE);
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
		aux->prev = NULL
		aux->n = value;
		*stack = aux;
	}
}
{/**
  * push - Function that print date in the screen
  * @stack : pointer of input
  * @item: int of input
  **/
void pall(stack_t **stack, unsigned int value)
	size_t count = 0;

	for (count = 0; *stack != NULL; count++)
	{
		printf("%d\n", *stack->n);
		*stack = *stack->next;
	}
}
/**
  * pint - Function that print date in the screen
  * @stack : pointer of input
  * @item: int of input
  **/
void pint(stack_t **stack, unsigned int value)
{
	printf("%d\n", *stack->n);
	*stack = *stack->next;
}
/**
  * pop - Function that remove the top element of the stack
  * @stack : pointer of input
  * @item: int of input
  **/
void pop(stack_t **stack, unsigned int value)
{
	stack_t *aux;

	if (*stack == NULL)
		printf("L<%lu>: can't pop an empty stack\n", value);
		exit(EXIT_FAILURE);
	aux = *stack;
	*stack = aux->next;
	aux->next = NULL;
	stack->prev = NULL;
	free(aux)
}
/**
  * swap - Function that print date in the screen
  * @stack : pointer of input
  * @item: int of input
  **/
void pall(stack_t **stack, unsigned int value)
{
	stack_t *aux;
	int temp = 0;

	aux = aux->next;
	temp = aux->n;
	aux->n = (*stack)->n;
	(*stack)->n = temp;
}
