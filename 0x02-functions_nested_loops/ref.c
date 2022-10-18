#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

int _isalpha(int c)
{
	int a = isalpha(c) > 0 ? 1 : 0;
	int l = islower(c) > 0 ? 1 : 0;
	int u = isupper(c) > 0 ? 1 : 0;
	return (a && (l || u));
}

int print_last_digit(int n)
{
        int r = (n < 0 ? ((unsigned int)r * -1) % 10 : ((unsigned int)r % 10));

        _putchar(r + '0');
        return (r);
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
	int r = abs(INT_MIN);

	r = r < 0 ? (r * -1) : r;

	printf("This is it %d\n", r);
	r = print_last_digit(r);
	_putchar('0' + r);
	
	/**r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');*/
	_putchar('\n');
	return (0);
}
