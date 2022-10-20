#include "main.h"

/**
 * print_square - check the code.
 *@size: input
 *
 * Return: Nothing
 */
void print_square(int size)
{
	int r = 0;

	while (r < size)
	{
		int c = 0;
		while (c < size)
		{
			_putchar('#');
			c++;
		}
		if (r != (size - 1))
		{
			_putchar('\n');
		}
		r++;
	}
	_putchar('\n');
}
