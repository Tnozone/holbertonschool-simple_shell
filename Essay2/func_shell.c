#include"shell.h"

char *builtin_str[] = {
	"cd",
	"help",
	"exit"
};



int (*builtin_func[]) (char **) = {
	&func_cd,
	&exit_pro,
};


/**
 *
 *
 */
int lsh_num_builtins()
{
	return sizeof(builtin_str) / sizeof(char *);
}



/**
 *
 *
 */
int lsh_help(__attribute__((unused))char **args)
{
	int i;

	for (i = 0; i < lsh_num_builtins(); i++)
	{
		printf("  %s\n", builtin_str[i]);
	}

	return (1);
}


/**
 *
 *
 */
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




/**
 *
 *
 */
int lsh_execute(char **args)
{
	int i;

	if (args[0] == NULL)
	{
		return (1);
	}

	for (i = 0; i < lsh_num_builtins(); i++)
	{
		if (strcmp(args[0], builtin_str[i]) == 0)
		{
			return (*builtin_func[i])(args);
		}
	}
	return (start(args));
}



#define LSH_TOK_BUFSIZE 64
#define LSH_TOK_DELIM " \t\r\n\a"
/**
 *
 *
 */
char **split_ligne_arg(char *line)
{
	int size = LSH_TOK_BUFSIZE;
	char **tokens;
	char *token;
	int i = 0;

	tokens = malloc(size * sizeof(char*));

	if (!tokens)
	{
		write(2, "Allocation error\n", 17);
		exit(EXIT_FAILURE);
	}

	token = strtok(line, LSH_TOK_DELIM);

	while (token != NULL)
	{
		tokens[i] = token;
		i++;
		if (!tokens)
		{
			write(2, "Allocation error\n", 17);
			exit(EXIT_FAILURE);
		}
		token = strtok(NULL, LSH_TOK_DELIM);
	}

	tokens[i] = NULL;
	return (tokens);
}
