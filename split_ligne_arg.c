#define LSH_TOK_DELIM " \t\r\n\a"
char **split_ligne_arg(char *line)
{
	int size = LSH_TOK_DELIM;
	char **tokens;
	char *token;

	tokens = malloc(size * sizeof(char*));

	if (!tokens)
	{
		perror("Allocation error\n");
		exit(EXIT_FAILLURE);
	}

	token = strtok(line, LSH_TOK_DELIM);

	while (token != NULL)
	{
		tokens[i] = token;
		i++;
		if (!tokens)
		{
			perror("Allocation error\n");
			exit(EXIT_FAILURE);
		}
		token = strtok(NULL, LSH_TOK_DELIM);
	}

	tokens[i] = NULL;
	return (tokens);
}
