#include "shell.h"


/**
 *
 *
 */
int main(__attribute__((unused))int argc, __attribute__((unused))char **argv)
{
	prompt();

	return (EXIT_SUCCESS);
}



/**
 *
 *
 */
#define LSH_RL_BUFSIZE 1024
char *read_line(void)
{

	char *line = NULL;
	size_t bufsize = 0;

	if (getline(&line, &bufsize, stdin) == -1)
	{
		if (feof(stdin))
			exit(EXIT_SUCCESS);
		else
		{
			perror("Erreur");
			exit(EXIT_FAILURE);
		}
	}
	return (line);
}



/**
 *
 *
 */
int start(char **args)
{
	pid_t pid;
	int status;

	pid = fork();

	if (pid == 0)
	{
		if (execve(args[0], args, NULL) == -1)
			exit(EXIT_SUCCESS);
	}

	else if (pid < 0)
		perror("Erreur");
	else
	{
		do
		{
			pid = waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	return (1);

}


int exit_pro(__attribute__((unused))char **args)
{
	return 0;
}
