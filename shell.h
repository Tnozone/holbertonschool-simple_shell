#ifndef __SIMPLE_SHELL__
#define __SIMPLE_SHELL__

#define IN 1
#define OUT 0

extern char **environ;

typedef struct control
{
	char *saisi;
	int (*f)(char *cmd, char **args, char **env);
} control_t;

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>

void free_tab (char **tabtok);
void print_pr(void);
int start(char *buff, char **env, int line);
int exec_path(char **args, char **env, int line);
char *path_func(char *cmd, char *PATH);
int (*control_saisii(char *saisi))(char *cmd, char **args, char **env);
int func_exit(char *cmd, char **args, char **env);
char **func_tok(char *buf);
size_t numberchar(char *s);
void free_tokens(char **tokens);
int print_env(char *comande, char **arg, char **envi);
void func_signal(__attribute__((unused)) int signal);

#endif
