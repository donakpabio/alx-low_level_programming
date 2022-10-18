#include <stdio.h>
#include "main.h"

/**
 * print_sign - writes the character c to stdout
 * @n: The character to print
 *
 * Return: result
 */
int print_sign(int n)
{
	int a;
	
	if (n > 0)
	{
		_putchar('+');
		a = 1);
	} else if (n == 0)
	{
		_putchar('0');
		a = 0;
	} else
	{
		_putchar('-');
		a = -1;
	}
	return (a);
}
