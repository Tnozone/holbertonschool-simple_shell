#include "shell.h"

/*
 
 */
char *builtin_str[] =
{
  "cd",
  "help",
  "exit"
};

int (*builtin_func[]) (char **) = {
  &lsh_cd,
  &lsh_help,
  &lsh_exit
};
