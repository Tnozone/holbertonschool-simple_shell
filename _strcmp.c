#include "shell.h"

/** _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: y
 */

int _strcmp(char *s1, char *s2)
{
  int y = 0, x = 0;

  while (s1[x] != '\0' && s2[x] != '\0')
    {
      if (s1[x] != s2[x])
	{
	  y = (s1[x] - s2[x]);
	  return (y);
	}
      x++;
    }
  return (y);
}
