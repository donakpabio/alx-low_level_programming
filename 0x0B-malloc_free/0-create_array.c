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

	ar = malloc(size * sizeof(char));

	ar[0] = c;
	return (ar);
}
