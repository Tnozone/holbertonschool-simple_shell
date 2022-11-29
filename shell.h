#ifndef _SHELL_H_
#define _SHELL_H_

#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv);
void prompt(void);
int _strcmp(char *s1, char *s2);
char *read_line(void);
char **split_ligne_arg(char *line);
int start(char **args);
int lsh_execute(char **args);
int func_cd(char **args);
int exit_pro(char **args);
int lsh_num_builtins();

#endif
