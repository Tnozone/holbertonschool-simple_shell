#include "shell.h"
/**
 * free_tab - FREE TAbleau de tokens
 * @tabtok: Tableau de token.
 */
void free_tab(char **tabtok)
{
	int i = 0;

	if (tabtok != NULL)
	{
		while (tabtok[i])
		{
			free(tabtok[i]);
			i++;
		}
		free(tabtok);
	}
}
