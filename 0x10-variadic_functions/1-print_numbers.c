#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_number - writes the character c to stdout
 * @n: The character to print
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

/**
 * print_string - Do something
 * @s: input
 * Return: Nothing
 */
void print_string(const char *s)
{
	int l, i;

	if (s != NULL)
	{
		i = 0;
		l = strlen(s);
		while (i < l)
		{
			_putchar((*s + i));
			i++;
		}
	}
}

/**
 * print_numbers - Do something
 * @separator: input
 * @n: input
 * Return: result
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	i = (int) n;

	va_start(ap, n);
	while (i > 0)
	{
		if ((i != n) && separator != NULL)
		{
			print_string(separator);
		}
		print_number(va_arg(ap, int));
		i--;
	}
	_putchar('\n');
	va_end(ap);
}
