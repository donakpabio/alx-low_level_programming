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
 * jack_bauer - check the code.
 *
 * Return: result
 */
int jack_bauer(void)
{
	int h = 0;

	while (h < 24)
	{
		int m = 0;

		while (m < 60)
		{
			if (h < 10)
			{
				_putchar('0');
			}
			print_digit(h);
			_putchar(':');
			if (m < 10)
			{
				_putchar('0');
			}
			print_digit(m);
			_putchar('\n');
			m++;
		}
		h++;
	}
	return (0);
}
