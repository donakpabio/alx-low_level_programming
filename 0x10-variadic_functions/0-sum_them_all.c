#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_thm_all - Do something
 * @n: input
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i;
	int t;

	if (n == 0)
	{
		return (0);
	}

	t = 0;
	i = (int) n;

	va_start(ap, n);
	while (i > 0)
	{
		t = t + va_arg(ap, int);
		i--;
	}
	va_end(ap);
	return (t);
}
