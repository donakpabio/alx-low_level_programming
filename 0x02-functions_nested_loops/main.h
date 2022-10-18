#include <stdio.h>

/**
 * _putchar - check the code.
 *
 * Return: Always Nothing.
 */
void _putchar(int c)
{
	putchar(c);
}

/**
 * print_alphabet - check the code.
 *
 * Return: Always Nothing.
 */
void print_alphabet()
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
        }
	_putchar('\n');
}
