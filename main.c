#include "monty.h"
/**
  * get_comparation - compare the function whit the data of input (entrada)
  * @s: the function
  *
  * Return : the function
  **/

void (*get_comparation(char *s))(stack_t, unsigned int)
{
	instruction_t opfun[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", suwap},
		{NULL, NULL}
	};
int count = 0;

	while (opfun[count].opcode)
	{
		if (strcmp(opfun[count].opcode, s) == 0)
		{
			return (opfun[count].f);
		}
		count++;
	}
	return (NULL);
}

/**
  * main - interprete of commands input since screen
  * @argc: count of arguments
  * @argv: arguments of input
  *
  * Return: Always 0
  **/
void main(int argc, char *argv[])
{
	char **linea = NULL;

	linea = malloc(sizeof(char *) * 64);
	if (linea == NULL)
		exit(EXIT_FAILURE);
	if (argc != 2)
	{
		fprintf(stderr, "L%s: usage: push integer\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	else
	{
		linea = get
