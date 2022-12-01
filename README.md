## Project Simple Shell from Holberton School Paris

Simple Shell is the the last project of the trimester, and the second collaborative project of the year. It is a simple version of the shell used by Linux.

## Description
Shell is a command interpreter: the shell technique is an infinite loop in C that reads what the user types in the promp and performs the appropriate actions. Either it's an internal shell command that's executed directly (internal functions), or it's an external program.

There are three parts to running a command:
* **Read**: Read the command from standard input.
* **Parse**: Separate the command string into a program and arguments.
* **Execute**: Run the parsed command.

#### Prototypes
```
-
```

## Project
For this project, we have made a prompt which recognizes commands typed into it and executes a shell command.
The shell needs to:
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

## Examples
##### Input
```
ls
```
##### Result
A list of the files in the directory appears.

##### Input
```
cd holberton_low_level_programming
```
##### Result
Current working directory changes to holberton_low_level_programming.

##### Input
```
exit
```
##### Result
The loop stops and the prompt disappears.

## Authors
Ali Segue, Yoko Ono, and Maxime Nocquet
