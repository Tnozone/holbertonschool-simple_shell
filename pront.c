#include "shell.h"
/**
 * print_pr - Function print $.
 *
 */
void print_pr(void)
{
	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", 2);
}
