#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_number - writes the character c to stdout
 * @n: The character to print
 *
 * Return: Nothing
 */
void print_number(int n)
{
	int r = abs(n) % 10;

	if (((n >= 0 ? n - r : n + r) == 0))
	{
		if (n < 0)
		{
			_putchar('-');
		}
		_putchar(r + '0');
	} else
	{
		print_number((n >= 0 ? n - r : n + r) / 10);
		_putchar(r + '0');
	}
}
