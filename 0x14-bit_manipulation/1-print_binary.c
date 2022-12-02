#include "main.h"

/**
 * print_binary - Do something
 * @n: input
 * Return: result
 */
void print_binary(unsigned long int n)
{
	int i;
	int s;

	i = 50;
	s = 0;
	while (i >= 0)
	{
		unsigned long int m;

		m = (1 << i);
		s = s == 0 ? (n & m) ? 1 : 0 : s;
		printf((n & m) ? "1" : s || (i == 0 && !s) ? "0" : "");
		i--;
	}
}
