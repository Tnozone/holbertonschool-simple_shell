## Project Simple Shell from Holberton School Paris

Simple Shell is the the last project of the trimester, and the second collaborative project of the year. It is a simple version of the shell used by Linux.

## Description
Shell is a command interpreter: the shell technique is an infinite loop in C that reads what the user types in the promp and performs the appropriate actions. Either it's an internal shell command that's executed directly (internal functions), or it's an external program.

There are three parts to running a command:
* **Read**: Read the command from standard input.
* **Parse**: Separate the command string into a program and arguments.
* **Execute**: Run the parsed command.

#### Prototypes
```int main(__attribute__((unused))int i, char **argc, char **argv)```
```void print_pr(void)```
```int start(char *buff, char **env, int line)```
```int (*control_saisii(char *saisi))(char *cmd, char **args, char **env)```
```void free_tab(char **tabtok)```
```int exec_path(char **args, char **env, int line)```
```char *path_func(char *cmd, char *PATH)```
```int func_exit(char *cmd, char **args, char **env)```
```char **func_tok(char *buf)```
```int _strcmp(char *s1, char *s2)```
```char *_strcat(char *dest, char *src)```
```char *_strcpy(char *dest, char *src)```
```char *_strdup(char *str)```

## Project
For this project, we have made a prompt which recognizes commands typed into it and executes a shell command. The shell needs to:
* Display a prompt and wait for the user to type a command. A command line always ends with a new line.
* Handle command lines with arguments.
* Handle the PATH
* Display the prompt again each time a command has been executed.
* Display an error message if the executable cannot be found, then display the prompt again.
* Display the current working environment with the ```env``` command.
* Handle errors.
* Handle the "end of file" condition.
* Exit the shell with the ```exit``` command.

## Requirements

* Compiled command: ```-Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh```
* Header files should be include guarded.
* Prototypes should be included in header file.
* No more than five functions per file.
* No more than 40 lines per function.
* Files follow the ```Betty``` style.

### List of allowed functions and system calls

* ```access``` (man 2 access)
* ```chdir``` (man 2 chdir)
* ```close``` (man 2 close)
* ```closedir``` (man 3 closedir)
* ```execve``` (man 2 execve)
* ```exit``` (man 3 exit)
* ```_exit``` (man 2 _exit)
* ```fflush``` (man 3 fflush)
* ```fork``` (man 2 fork)
* ```free``` (man 3 free)
* ```getcwd``` (man 3 getcwd)
* ```getline``` (man 3 getline)
* ```getpid``` (man 2 getpid)
* ```isatty``` (man 3 isatty)
* ```kill``` (man 2 kill)
* ```malloc``` (man 3 malloc)
* ```open``` (man 2 open)
* ```opendir``` (man 3 opendir)
* ```perror``` (man 3 perror)
* ```read``` (man 2 read)
* ```readdir``` (man 3 readdir)
* ```signal``` (man 2 signal)
* ```stat``` (__xstat) (man 2 stat)
* ```lstat``` (__lxstat) (man 2 lstat)
* ```fstat``` (__fxstat) (man 2 fstat)
* ```strtok``` (man 3 strtok)
* ```wait``` (man 2 wait)
* ```waitpid``` (man 2 waitpid)
* ```wait3``` (man 2 wait3)
* ```wait4``` (man 2 wait4)
* ```write``` (man 2 write)

## Return

## Examples
##### Input
```
ls
```
##### Result
A list of the files in the directory appears.

##### Input
```
exit
```
##### Result
The loop stops and the prompt disappears.

## Man page
```man 1 simple_shell```

## Memory Check

## Bug Report

## Authors
Ali Segue, Yoko Ono, and Maxime Nocquet
