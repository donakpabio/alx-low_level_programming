#include "main.h"

/**
 * print_triangle - check the code.
 *@size: input
 *
 * Return: Nothing
 */
void print_triangle(int size)
{
	int r = 0;

	while (r < size)
	{
		int c = 0;
		while (c < size)
		{
			if (c < (size - r - 1))
			{
				_putchar(' ');
			} else
			{
				_putchar('#');
			}
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
