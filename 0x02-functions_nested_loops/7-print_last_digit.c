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
	int r = (n == abs(n) ? ((unsigned int)n % 10) : (abs(n) % 10));

	_putchar(r + '0');
	return (r);
}
