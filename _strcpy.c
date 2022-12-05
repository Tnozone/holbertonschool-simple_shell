#include "shell.h"

/**
 * *_strcpy - copies a string
 * @dest: destination buffer
 * @src: string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
  int x = 0, len = 0;

  while (src[len] != '\0')
    len++;

  for (x = 0; x <= len; x++)
    dest[x] = src[x];

  return (dest);
}
