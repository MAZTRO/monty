#include "monty.h"

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
