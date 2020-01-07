#include "monty.h"

/**
  * get_comparation - compare the function whit the data of input (entrada)
  * @s : the function
  * @structure : double poinetr of input
  *
  * Return: the function
  **/
int get_comparation(char *Token, stack_t **structure, unsigned int ln_num)
{
	instruction_t opfun[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};
	int value = 0, data = 0;
	int count = 0;

	while (opfun[count].opcode && count <= 6)
	{
		printf("Opfun: %s\n Token en primer while: %s\n", opfun[count].opcode, Token);
		if (strcmp(opfun[count].opcode, "push") != 0)
		{
			if (strcmp(opfun[count].opcode, Token) == 0)
			{
				opfun[count].f(structure, ln_num, value);
			}
		}
		else if (strcmp(opfun[count].opcode, Token) == 0)
		{
			Token = strtok(NULL, " \n");
			if (Token == NULL)
			{
				data = 2;
				case_error_1(structure, ln_num, data);
			}
			if ((*Token >= 48 && *Token <= 57) && (Token != NULL))
			{
				value = atoi(Token);
			}
			opfun[count].f(structure, ln_num, value);
			count++;
		}
	}
	return (-1);
}
