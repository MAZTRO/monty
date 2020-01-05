#include "monty.h"

/**
  * get_comparation - compare the function whit the data of input (entrada)
  * @s : the function
  * @structure : double poinetr of input
  *
  * Return : the function
  **/
int get_comparation(char *s, stack_t **structure)
{
	instruction_t opfun[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{NULL, NULL}
	};
	int value = 0;
	int count = 0;

	if (*s > 47 && *s < 58)
	{
		value = atoi(s);
	}
	while (opfun[count].opcode && count <= 4)
	{
		if (strcmp(opfun[count].opcode, s) == 0)
		{
			opfun[count].f(structure, value);
			return (count);
		}
		count++;
	}
	return (count);
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
	char *line = NULL;
	FILE *ID;
	char *fun;
	char *delim = " \n";
	stack_t *structure;
	int count = 0, test = 0;
	size_t bufsize = 1024;

	line = malloc(sizeof(char *) * 64);
	if (line == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		ID = fopen(argv[1], "r");
		if (ID == NULL)
		{
			fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
			exit(EXIT_FAILURE);
		}
		while ((getline(&line, &bufsize, ID)) != -1)
		{
			fun = getTokens(line, delim);
			test = get_comparation(fun, &structure);
			if (test > 4 && line == NULL)
			{
				fprintf(stderr, "%d: unknown instruction %s\n", count + 1, fun);
				exit(EXIT_FAILURE);
			}
			count++;
		}
	}
	return (EXIT_SUCCESS);
}
