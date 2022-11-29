#ifndef _H_H_
#define _H_H_
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int lsh_cd(char **args);
int lsh_help(char **args);
int lsh_exit(char **args);

int lsh_num_builtins();
int lsh_help(__attribute__((unused))char **args);
int lsh_exit(__attribute__((unused))char **args);
int lsh_launch(char **args);
int lsh_execute(char **args);
char *lsh_read_line(void);
char **lsh_split_line(char *line);
void lsh_loop(void);
int main(__attribute__((unused))int argc, __attribute__((unused))char **argv);

#endif
