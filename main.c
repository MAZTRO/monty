#include "monty.h"
/**
 * verification - Test the arguments o files
 * Return: Nothing
 */
void verification(int ac)
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
	char *buffer = NULL;
	size_t get, number;
	unsigned int line = 0;
	stack_t *stack;

	verification(argc);
	stack = NULL;
	ID = fopen(argv[1], "r");
	if (ID == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	get = getline(&buffer, &number, ID);
	while (get != -1)
		{
			line++;
			if(buffer[get - 1] == '\n')
				buffer[get - 1] = '\0';
			get_compare(buffer, line, &stack);
			free(buffer);
			buffer = NULL;
			get = getline(&buffer, &number, ID);
		}
		free(buffer);
		free_all(stack);
	return(EXIT_SUCCESS);
}
