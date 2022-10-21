#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_number - writes the character c to stdout
 * @d: The character to print
 *
 * Return: Nothing
 */
void print_number(int d)
{
	int r = abs(d) % 10;

	if (((d >= 0 ? d - r : d + r) == 0))
	{
		if (d < 0)
		{
			_putchar('-');
		}
		_putchar(r + '0');
	} else
	{
		print_number((d >= 0 ? d - r : d + r) / 10);
		_putchar(r + '0');
	}
}
