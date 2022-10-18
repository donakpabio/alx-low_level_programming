#include <stdio.h>
#include "main.h"

/**
 * _putchar - check the code.
 *
 * Return: Always Nothing
 */
void _putchar(int c)
{
	putchar(c);
}

/**
 * print_alphabet - check the code.
 *
 * Return: Always Nothing
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
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	return (0);
}
