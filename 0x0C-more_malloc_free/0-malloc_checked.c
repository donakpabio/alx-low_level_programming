#include <limits.h>
#include "main.h"

/**
 * malloc_checked - Do something
 * @b: input
 * Return: result
 */
void *malloc_checked(unsigned int b)
{
	int *r;

	r = malloc(b);
	if (r == NULL)
	{
		exit(98);
	}
	return (r);
}
