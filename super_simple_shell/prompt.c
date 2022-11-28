#include <unistd.h>

void _prompt(void)
{
	char *lineptr;

	lineptr = '$';
	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, 'lineptr', 2);
}
