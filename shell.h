#ifndef _SHELL_H_
#define _SHELL_H_

#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <dirent.h>

char *builtin_str[] = {
  "cd",
  "exit"
};

int (*builtin_func[]) (char **) = {
  &func_cd,
  &exit_pro,
};

int main(int argc, char **argv);
void prompt(void);
int _strcmp(char *s1, char *s2);
char *read_line(void);
char **split_ligne_arg(char *line);
int start(char **args);
int lsh_execute(char **args);

#endif
