#include "shell.h"
/**
 *print_env - prints the current environment
 *@comande: command inputed by user
 *@arg: array of arguments
 *@envi: array of strings of the envi
 *Return: always 0 (success)
 */
int print_env(char *comande, char **arg, char **envi)
{
	unsigned int i = 0;

	(void)comande;
	(void)arg;

	while (envi[i] != NULL)
	{
		printf("%s\n", envi[i]);
		i++;
	}
	return (0);
}
