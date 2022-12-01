#include "shell.h"
#define BUFSIZE 64
#define DELIM " \t\r\n\a"
/**
 * func_tok - Tha creates token.
 * @buf: The buffer receive
 * Return: (args)
 */
/**
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
		tokens[i] = strdup(token);
		token = strtok(NULL, DELIM);
		i++;
	}

	tokens[i] = NULL;
	return (tokens);
}
*/
char **func_tok(char *buff)
{
	int size = BUFSIZE;
	char **tokens = NULL;
	char *arg = NULL;
	int i = 0;

	tokens = malloc(size * sizeof(char*));
	if (!tokens)
		return (NULL);
	arg = strtok(buff, DELIM);

	while (arg != NULL)
	{
		tokens[i] = strdup(arg);
		arg = strtok(NULL, DELIM);
		i++;
	}
	tokens[i] = NULL;
	return (tokens);
}

