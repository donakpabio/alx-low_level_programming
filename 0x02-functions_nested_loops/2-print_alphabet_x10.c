#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always Nothing
 */
void print_alphabet_x10()
{
	int b = 0;

	while (b < 10)
	{
		char a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		b++;
	}
}
