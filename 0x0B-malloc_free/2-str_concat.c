#include "main.h"

/**
 * str_concat - Do something
 * @s1: input
 * @s2: input
 * Return: result
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL || s2 == NULL)
	{
		char *r = malloc(1);

		r[0] = '\0';
		return (r);
	}

	int l1 = strlen(s1);
	int l2 = strlen(s2);
	char *r = malloc((l1 + l2) * sizeof(char));
	int i = 0;
	int j = 0;

	while (i < l1)
	{
		r[i] = s1[j];
		i++;
		j++;
	}

	j = 0;
	while (i < (l1 + l2))
	{
		r[i] = s2[j];
		i++;
		j++;
	}
	return (r);
}
