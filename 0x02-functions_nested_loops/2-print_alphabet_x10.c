#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always Nothing
 */
void print_alphabet_x10()
{
	for (int a=0; a<10; a++)
	{
		char a;

		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
