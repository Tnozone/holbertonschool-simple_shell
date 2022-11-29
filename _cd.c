#include "shell.h"
/**
 *
 *
 *
 */
int func_cd(char **args)
{

	if (args[1] == NULL)
	{
		write(2, "Expected argument\n", 17);
	}

	else
	{
		if (chdir(args[1]) != 0)
		{
			perror(">");
		}
	}
	return (1);
}
