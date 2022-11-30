#include "shell.h"
/**
 * func_tok - Tha creates token.
 * @buf: The buffer receive
 * Return: (args)
 */
char **func_tok(char *buf)
{
	char *delim = " ";
	char **tokens = NULL;
	char *token = NULL;
	int i = 0;

	tokens = malloc(sizeof(char *) * (wordcount(buf) + 1));
	if (!tokens)
		return (NULL);
	token = strtok(buf, delim);

	while (token != NULL)
	{
		tokens[i] = strdup(token);
		token = strtok(NULL, delim);
		i++;
	}
	tokens[i] = NULL;
	return (tokens);
}
/**
 * free_tokens - free the array of tokens
 * @tokens: tokens array
 */
void free_tokens(char **tokens)
{
	int i = 0;

	if (tokens)
	{
		while (tokens[i])
		{
			free(tokens[i]);
			i++;
		}
		free(tokens);
	}
}
