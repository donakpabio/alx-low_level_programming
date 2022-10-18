#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - writes the character c to stdout
 * @n: The character to print
 *
 * Return: result
 */
int print_last_digit(int n)
{
	int r = ((n < 0 ? n * -1 : n) % 10);

	_putchar(r + '0');
	return (r);
}
