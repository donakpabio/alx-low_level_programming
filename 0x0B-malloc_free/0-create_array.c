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

	if (size < 1)
	{
		return (NULL);
	}

	ar = malloc(size * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}

	ar[0] = c + '0';
	return (ar);
}
