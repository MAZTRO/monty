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
