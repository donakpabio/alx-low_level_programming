#include <stdio.h>
#include <stdlib.h>
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
 * print_to_98 - writes the character c to stdout
 * @n: The character to print
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n < 0)
			{
				_putchar('-');
			}
			print_digit(abs(n));
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	} else
	{
		while (n >= 98)
		{
			print_digit(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
		_putchar('\n');
}
