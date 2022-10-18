#include <stdio.h>
#include <ctype.h>
#include "main.h"

int _isalpha(int c)
{
	int a = isalpha(c) > 0 ? 1 : 0;
	int l = islower(c) > 0 ? 1 : 0;
	int u = isupper(c) > 0 ? 1 : 0;
	return (a && (l || u));
}

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
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
