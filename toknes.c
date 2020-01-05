#include "monty.h"

int global_var;

/**
 * getTokens - function that generate Tokens
 * @entrada : data of input argv[1]
 * @delim : array that have the all command of input since screen
 * Return: Always TokenT
 **/

char *getTokens(char *entrada, char *delim)
{
	char *TokenT = NULL;

	TokenT = strtok(entrada, delim);
	TokenT = strtok(NULL, delim);
	printf("TOKEN: %s\n", TokenT);
	return (TokenT);
}
