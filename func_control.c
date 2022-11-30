#include "shell.h"
/**
 * control_saisi - That control if saisi exists.
 * @saisi: command entered by user
 * Return: (NULL)
 */
int (*control_saisi(char *saisi))(char *cmd, char **args, char **env)
{
	int i;
	control_t tbs[] = {
		{"exit", func_exit},
		{NULL, NULL},
	};

	for (i = 0; tbs[i].saisi != NULL; i++)
	{
		if (strcmp(saisi, tbs[i].saisi) == 0)
			return (tbs[i].f);
	}
	return (NULL);
}
