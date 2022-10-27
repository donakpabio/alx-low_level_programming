#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_number - writes the character c to stdout
 * @n: input
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

void _putchar(int c)
{
	putchar(c);
}

int main(void)
{
    print_number(98);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(-98);
    _putchar('\n');
    return (0);
}
