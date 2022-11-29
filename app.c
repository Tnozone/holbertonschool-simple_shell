#include "shell.h"

/*
 
 */
char *builtin_str[] =
{
  "cd",
  "exit"
};

int (*builtin_func[]) (char **) = {
  &func_cd,
  &exit_pro
};
