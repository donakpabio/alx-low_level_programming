#include "main.h"

/**
 * print_binary - Do something
 * @n: input
 * Return: result
 */
void print_binary(unsigned long int n)
{
	int i;

	i = 16;
	while (i >= 0)
	{
		unsigned int m;

		m = (1 << i);
		printf((n & m) ? "1" : "0");
		i--;
	}
}
