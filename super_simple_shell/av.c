#include <stdio.h>

/**
  * main - prints all the arguments, without using ac.
  *
  * @ac: number of items in av
  * @av: NULL terminated array of strings
  * Return: Nothing
  */

int main(__attribute__((unused))int ac, char *av[])
{
	int i = 0;

	while (av[i] != NULL)
	{
		printf("%s\n", av[i]);
		i++;
	}

	return (0);
}
	
