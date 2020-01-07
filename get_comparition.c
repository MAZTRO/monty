#include "monty.h"

/**
  * get_comparation - compare the function whit the data of input (entrada)
  * @Token: the function
  * @structure: double poinetr of input
  * @ln_num: line of the bytecode
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
	int count = 0, status = 0;

	while (opfun[count].opcode && count <= 6)
	{
		if (strcmp(opfun[count].opcode, "push") != 0)
		{
			if (strcmp(opfun[count].opcode, Token) == 0)
			{opfun[count].f(structure, ln_num, value), status = 1; }
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
			{value = atoi(Token); }
			opfun[count].f(structure, ln_num, value), status = 1;
			return (0);
		}
		count++;
	}
	if (count == 7 && status == 0)
	{return (-1); }
	else
	{return (0); }
}
