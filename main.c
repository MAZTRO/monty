#include "monty.h"

/**
 * verification - Test the arguments o files
 * @ac: integer.
 * Return: Nothing
 */
void verify_arguments(int ac)
{
	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
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
	FILE *ID;
	char *line = NULL, *Token = NULL;
	stack_t *structure = NULL;
	unsigned int count = 0;
	int test = 0;
	size_t bufsize = 1024;

	verify_arguments(argc);

	ID = fopen(argv[1], "r");
	if (ID == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((getline(&line, &bufsize, ID)) != -1)
	{
		printf("Token: %s\n", Token);
		Token = strtok(line, " \n");
		printf("Token line 45: %s\n", Token);
		if (Token == NULL) {Token = ""; }
		test = get_comparation(Token, &structure, count);
		if (test == -1)
		{
			fprintf(stderr, "L%u: unknown instruction %s\n", count, Token);
			free_all(&structure);
			fclose(ID);
			exit(EXIT_FAILURE);
		}
		count++;
	}
	fclose(ID);
	free(line);
	return (EXIT_SUCCESS);
}
