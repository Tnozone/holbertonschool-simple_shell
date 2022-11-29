#include "shell.h"

int main(__attribute__((unused))int argc, __attribute__((unused))char **argv)
{
	prompt();

	return (EXIT_SUCCESS);
}
#include "shell.h"
char *builtin_str[] =
{
  "cd",
  "exit"
};

int (*builtin_func[]) (char **) = {
  &func_cd,
  &exit_pro
};
