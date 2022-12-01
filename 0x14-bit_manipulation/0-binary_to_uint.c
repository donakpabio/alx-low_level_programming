#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * power - Do something
 * @x: input
 * @y: input
 * Return: result
 */
int power(int x, int y)
{
	int i, n;

	i = 0;
	n = 1;

	while (i < y)
	{
		n = n * x;
		i++;
	}
	return (n);
}

/**
 * binary_to_uint - Do something
 * @b: input
 * Return: result
 */
unsigned int binary_to_uint(const char *b)
{
	int l, n, y, x, z;

	if (b == NULL)
	{
		return (0);
	}

	l = strlen(b) - 1;
	n = 0;
	y = 0;
	z = 0;
	x = 2;

	while (l >= 0)
	{
		if (!isdigit(*(b + l)))
		{
			return (0);
		}
		z = *(b + l) - '0';
		n = n + (power(x, y) * z);
		l--;
		y++;
	}
	return (n);
}
