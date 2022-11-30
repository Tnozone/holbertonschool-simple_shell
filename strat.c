#include "shell.h"
/**
 * start - start programme
 * @buff: command entered to be executed
 * @env: the env in wich we exec commands
 * @line: The lines inputed
 * Return: (0)
 */
int start(char *buff, char **env, int line)
{
	int start = 0;
	char **arg = NULL;

	arg = func_tok(buff);
	if (arg[0])
	{
		start = exec_path(arg, env, line);
		return (start);
	}
	return (0);
}
