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

int _isupper(int c)
{
	return (isupper(c) > 0 ? 1 : 0);
}

int print_last_digit(int n)
{
        int r = (n == abs(n) ? ((unsigned int)r * -1) % 10 : (abs(r) % 10));

        _putchar(r + '0');
        return (r);
}

int jack_bauer(void)
{
        int h = 0;

        while (h < 24)
        {
                int m = 0;

                while (m < 60)
                {
                        if (h < 10)
                        {
                                _putchar('0');
                        }
                        int a = 0;
                        while (a<2)
                        {
                                _putchar('0' + (h + "")[a]);
                                a++;
                        }
                        _putchar(':');
                        if (m < 10)
                        {
                                _putchar('0');
                        }
                        _putchar('0' + m);
                        _putchar('\n');
                        m++;
                }
                h++;
        }
        return (0);
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
	printf("This is it:%d", isdigit('1'));
	/**int r = abs(-1024);

	r = r < 0 ? (r * -1) : r;

	printf("This is it %d\n", r);
	r = print_last_digit(r);
	_putchar('0' + r);
	
	r = _isalpha('H');
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
