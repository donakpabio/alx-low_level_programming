#include <stdio.h>
#include <ctype.h>
#include "main.h"

int _islower(int c)
{
	return islower(c) > 0 ? 1 : 0;
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
	
	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
