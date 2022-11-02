#include "main.h"

/**
 * is_prime - Do something
 * @n: input
 * @i: input
 * Return: result
 */
int is_prime(int n, int i)
{
	if ((n <= 1) || ((n % i == 0) && (n != i)))
	{
		return (0);
	} else if (n == i)
	{
		return (1);
	}
	i++;
	return (is_prime(n, i));
}

/**
 * is_prime_number - Do something
 * @n: input
 * Return: result
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
