#include <string.h>
#include "main.h"

/**
 * string_nconcat - Do something
 * @s1: input
 * @s2: input
 * @n: input
 * Return: result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = 0, l2 = 0, t = 0; 
	int i = 0, j = 0;
	char *r;

	l1 = s1 == NULL ? 0 : strlen(s1);
	l2 = s2 == NULL ? 0 : strlen(s2);

	l2 = n >= l2 ? l2 : n >= 0 ? n : 0;
	t = l1 + l2;

	r = malloc(t + 1);
	if (r == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		while (i < l1)
		{
			r[i] = s1[i];
			i++;
		}
	}

	if (s2 != NULL)
	{
		while (j < l2)
		{
			r[i] = s2[j];
			i++;
			j++;
		}
	}
	r[i] = '\0';
	return (r);
}
