#include "main.h"

/**
 * _sqrt - Do something
 * @n: input
 * @i: input
 * Return: result
 */
int _sqrt(int n, int i)
{
	if (n < 0 || (n == i && n != 1))
	{
		return (-1);
	} else if ((i * i) == n)
	{
		return (i);
	}
	i++;
	return (_sqrt(n, i));
}

/**
 * _sqrt_recursion - Do something
 * @n: input
 * Return: result
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
