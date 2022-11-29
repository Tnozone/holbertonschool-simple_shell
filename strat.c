int start(char **args)
{
	pid_t pid, wpid;
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
			wpid = waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));

		if (_strcmp(command, args[0]))
			free(command);
	}
	return 1;

}
