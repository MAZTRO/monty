#include "monty.h"
/**
  * get_comparation - compare the function whit the data of input (entrada)
  * @s : the function
  * @structure : double poinetr of input
  *
  * Return : the function
  **/
void get_comparation(char *s, stack_t **structure)
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
			opfun[count].f(structure, 8);
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
int main(int argc, char *argv[])
{
	char **line = NULL;
	char **fun = NULL;
	char *delim = NULL;

	stack_t *structure;
	int line_number1 = 0;
	int count_1 = 0;

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
			line_number1 = atoi(fun[count_1 + 1]);
			get_comparation(fun[count_1], &structure);
			count_1++;
		}
	}
	line_number1 = line_number1;
	return (0);
}
