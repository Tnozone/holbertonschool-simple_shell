#include "shell.h"

int main(__attribute__((unused))int argc, __attribute__((unused))char **argv)
{
	prompt();

	return (EXIT_SUCCESS);
}
char *builtin_str[] = {
  "cd",
  "exit"
};

int (*builtin_func[]) (char **) = {
	&func_cd,
	&exit_pro,
};

int exit_pro(__attribute__((unused))char **args)
{
	return 0;
}


