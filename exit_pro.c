#include "shell.h"

int exit_pro(char **args)
{
  return 0;
}

int lsh_num_builtins()
{
  return sizeof(builtin_str) / sizeof(char *);
}
