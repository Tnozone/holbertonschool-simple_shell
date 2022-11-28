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
		args = split_line(line); /*function to parse the commands*/
		status = execute(args); /*function to execute the command*/

		free(line);
		free(args);
	} while (status);
}
