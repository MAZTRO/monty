#include "monty.h"

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
	if (TokenT == NULL)
	{
		TokenT = "";
		return (TokenT);
	}
	return (TokenT);
}
