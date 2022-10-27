#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * cap_string - Capitalize
 * @s: input
 * Return: result
 */
char *cap_string(char *s)
{
	int l = strlen(s);
	int i = 0;

	while (i < l)
	{
		char c = *(s + i);

		if (strchr(" \t\n,;.!?\"(){}", c) != NULL)
		{
			if (((i + 1) < l) && !(i == 0))
			{
				*(s + i + 1) = toupper(*(s + i + 1));
				i++;
				continue;
			}
		}
		i++;
	}
	return (s);
}
