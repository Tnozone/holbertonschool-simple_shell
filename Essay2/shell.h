#ifndef _SHELL_H_
#define _SHELL_H_

#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int lsh_cd(char **args);
int lsh_help(char **args);
int lsh_exit(char **args);


int main(__attribute__((unused))int argc, __attribute__((unused))char **argv);
void prompt(void);
int _strcmp(char *s1, char *s2);
char *read_line(void);
char **split_ligne_arg(char *line);
int start(char **args);
int lsh_execute(char **args);
int func_cd(char **args);
int exit_pro(__attribute__((unused))char **args);
int lsh_help(__attribute__((unused))char **args);
int lsh_num_builtins();

#endif
