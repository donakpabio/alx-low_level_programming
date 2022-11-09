#include "main.h"

/**
 * create_array - Do something
 * @size: input
 * @c: input
 * Return: result
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	int i = 0;

	if (size < 1)
	{
		return (NULL);
	}

	ar = malloc(size * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		ar[i] = c;
	}
	return (ar);
}
