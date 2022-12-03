#include "shell.h"
/**
 * path_func - Follow the path to see if the command is present
 * @cmd: User input
 * @PATH: The path to follow
 * Return: (cmd)
 */
char *path_func(char *cmd, char *PATH)
{
	char *p_item = NULL;
	char *path = NULL;

	p_item = strtok(PATH, ":");
	while (p_item)
	{
		path = malloc(sizeof(char) * (strlen(cmd) + strlen(p_item)) + 2);
		path = strcpy(path, p_item);
		path = strcat(path, "/");
		path = strcat(path, cmd);
		if (access(path, X_OK) == 0)
			return (path);
		free(path);
		path = NULL;
		p_item = strtok(NULL, ":");
	}
	return (strdup(cmd));
}
