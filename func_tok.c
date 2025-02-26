#include "shell.h"
#define BUFSIZE 64
#define DELIM " \t\r\n\a"
/**
 * func_tok - Tha creates token.
 * @buf: The buffer receive
 * Return: (args)
 */
char **func_tok(char *buf)
{
	int size = BUFSIZE;
	int i = 0;
	char **tokens;
	char *token;


	tokens = malloc(size * sizeof(char*));
	if (!tokens)
	{
		printf("Allocation error\n");
		exit(EXIT_FAILURE);
	}

	token = strtok(buf, DELIM);

	while (token != NULL)
	{
		tokens[i] = token;
		i++;

		token = strtok(NULL, DELIM);
	}

	tokens[i] = NULL;
	return (tokens);
}
