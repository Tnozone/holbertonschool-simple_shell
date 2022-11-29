#include "shell.h"
/**
  * _strcmp - compares two strings.
  *
  * @s1: string to be compared with @s2
  * @s2: string to be compared with @s1
  * Return: positive number - string s1 is greater than s2
  *         0 - string s1 equal to s2
  *	    negative number - string s1 less than s2
  */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int dif = 0;

	while (dif == 0 && (s1[i] != '\0' || s2[i] != '\0'))
	{
		dif = s1[i] - s2[i];
		i++;
	}
	return (dif);
}
