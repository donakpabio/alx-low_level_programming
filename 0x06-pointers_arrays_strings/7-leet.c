#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * leet - Do something
 * @s: input
 * Return: result
 */
char *leet(char *s)
{
	char b[10] = "4307143071";
	char a[10] = "aeotlAEOTL";
	int l = strlen(s);
	int i = 0;

	while (i < l)
	{
		int j = 0;

		while (j < 10)
		{
			if (*(s + i) == a[j])
			{
				*(s + i) = b[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
