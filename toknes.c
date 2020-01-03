#include "monty.h"
/**
 * getTokens - function that generate Tokens
 * @entrada : data of input argv[1]
 * @delim : array that have the all command of input since screen
 * Return: Always TokenT
 **/
char **getTokens(char *entrada, char *delim)
{
	char **TokenT, *aux;
	int i = 0;

	TokenT = malloc(sizeof(char *) * 64);
	if (TokenT == NULL)
		exit(EXIT_FAILURE);
	aux = strtok(entrada, delim);
	while (aux != NULL)
	{
		TokenT[i] = aux;
		aux = strtok(NULL, delim);
		i++;
	}
	return (TokenT);
}
