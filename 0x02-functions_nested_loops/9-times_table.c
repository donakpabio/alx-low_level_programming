#include <stdio.h>
#include "main.h"

/**
 * print_digit - writes the character c to stdout
 * @d: The character to print
 *
 * Return: Nothing
 */
void print_digit(int d)
{
	int r = d % 10;

	if ((d - r) == 0)
	{
		_putchar(r + '0');
	} else
	{
		print_digit((d - r) / 10);
		_putchar(r + '0');
	}
}

/**
 * times_table - writes the character c to stdout
 *
 * Return: Nothing
 */
void times_table(void)
{
	int a = 0;

	while (a < 10)
	{
		int b = 0;

		while (b < 10)
		{
			int r = a * b;

			if (b > 0)
			{
				_putchar(' ');
				if (r < 10)
				{
					_putchar(' ');
				}
			}
			if (r < 10)
			{
				_putchar(r + '0');
			} else
			{
				print_digit(r);
			}
			if (b != 9)
			{
				_putchar(',');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
