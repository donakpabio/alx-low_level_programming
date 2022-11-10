#include "main.h"

/**
 * array_range - Do something
 * @min: input
 * @max: input
 * Return: result
 */
int *array_range(int min, int max)
{
	int i = 0, l = 0, c = 0;
	int *r;

	if (min > max)
	{
		return (NULL);
	}
	
	l = max - min + 1;
	c = min;
	r = malloc(l * sizeof(int));
	
	if (r == NULL)
	{
		return (NULL);
	}

	while (i <= l)
	{
		r[i] = c;
		i++;
		c++;
	}
	return r;
}
