#include <string.h>
#include "main.h"

void _putchar(int c)
{
	putchar(c);
}

/**
 * print_number - Do something
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

int main(int argc, char **argv)
{
	print_number(argc - 1);
	_putchar('\n');
	exit(EXIT_SUCCESS);
}
