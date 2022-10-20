#include "main.h"

/**
 * print_diagonal - check the code.
 *@n: input
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int i = 0;

	while (i < n)
	{
		int t = 0;
		while (t < i)
		{
			_putchar(' ');
			t++;
		}
		_putchar('\\');
		i++;
		if (i != (n))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
