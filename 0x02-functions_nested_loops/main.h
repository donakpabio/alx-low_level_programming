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
