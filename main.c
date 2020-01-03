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
		{"swap", swap},
		{NULL, NULL}
	};
int count = 0;

	while (opfun[count].opcode)
	{
		if (strcmp(opfun[count].opcode, s) == 0)
		{
			opfun[count].f();
		}
		count++;
	}
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
	char **line = NULL, char **fun = NULL, char *delim = NULL;
	stack_t structure;
	unsigned int line_number = 0;
	count_1 = 0;

	line = malloc(sizeof(char *) * 64);
	if (line == NULL)
		exit(EXIT_FAILURE);
	if (argc != 2)
	{
		fprintf(stderr, "L%s: usage: push integer\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	else
	{
		delim = "\n";
		line = getTokens(argv[1], delim);
		delim = " ";
		while (line != NULL)
		{
			fun = getTokens(line[count_1], delim);
			line_number = fun[count_1 + 1];
			(*get_comparition(fun[count_1]))(structure, line_number);
			count_1++;
		}
	}
}
