#include "shell.h"

void prompt(void)
{
	char *line;
	char **args;
	int status;

	do
	{
		write(1, "$ ", 2); /*input prompt*/
		line = read_line(); /*function to read the input*/
		args = split_ligne_arg(line); /*function to parse the commands*/
		status = exit_pro(args); /*function to execute the command*/

		free(line);
		free(args);
	} while (status);
}
