#include "main.h"

/**
 * print_diagonal - check the code.
 *@n: input
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int i = 0;

	while (i < n)
	{
		int t = 0;
		while (t < i)
		{
			_putchar(' ');
			t++;
		}
		_putchar('\\');
		i++;
		if (i != (n))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}

/**
void _putchar(int c)
{
	putchar(c);
}

int main(void)
{
	print_diagonal(0);
	print_diagonal(2);
	print_diagonal(10);
	print_diagonal(-4);
	return (0);
}*/
