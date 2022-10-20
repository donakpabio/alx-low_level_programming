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
 * more_numbers - check the code.
 * Return: Nothing
 */
void more_numbers(void)
{
	int t = 0;

	while (t < 10)
	{
		int i = 0;

		while (i <= 14)
		{
			print_digit(i);
			i++;
		}
		_putchar('\n');
		t++;
	}
}
