#include "shell.h"
/**
 * exec_path - Recherche command
 * @args: array of arguments passed to stdin
 * @env: array of strings of env
 * @line: non utiliser
 * Return: (0) ou (134)exit
 */
int exec_path(char **args, char **env, __attribute__((unused))int line)
{
	pid_t pidchild;
	char *fullpath = NULL;
	char *PATH;

	PATH = getenv("PATH");/*recuperer variable d'environement systeme*/

	if (!PATH && execve(args[0], args, env) == -1)
	{
		free(fullpath);
		return (134);
	}
	else
	{
		PATH = strdup(PATH);
		fullpath = path_func(args[0], PATH);
		free(PATH);

		pidchild = fork();
		if (pidchild == 0)
		{
			if ((execve(fullpath, args, env)) == -1)
			{
				free(fullpath);
				return (134);
			}
		}

		else if (pidchild > 0)
		  wait(NULL);

	}

	return (0);
}
