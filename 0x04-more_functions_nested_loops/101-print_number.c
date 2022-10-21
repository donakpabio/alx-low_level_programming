#include "main.h"

/**
 * print_number - writes the character c to stdout
 * @d: The character to print
 *
 * Return: Nothing
 */
void print_number(int d)
{
	int r = d % 10;

	if ((d - r) == 0)
	{
		_putchar(r + '0');
	} else
	{
		print_number((d - r) / 10);
		_putchar(r + '0');
	}
}
