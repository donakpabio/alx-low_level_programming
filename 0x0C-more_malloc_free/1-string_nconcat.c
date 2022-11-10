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
	int l1 = 0, l2 = 0, i = 0, j = 0;
	char *r;

	l1 = s1 == NULL ? 1 : strlen(s1);
	l2 = s2 == NULL ? 1 : strlen(s2);

	l2 = n >= l2 ? l2 : n;

	r = malloc(l1 + l2 + 1);
	if (r == NULL)
	{
		return (NULL);
	}

	while (i < l1)
	{
		r[i] = s1[i];
		i++;
	}

	while (j < l2)
	{
		r[i] = s2[j];
		i++;
		j++;
	}
	r[i] = '\0';
	return r;
}


int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
