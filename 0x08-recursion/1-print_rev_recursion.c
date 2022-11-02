#include <string.h>
#include "main.h"

/**
 * _print_reverse - Do something
 * @s: input
 * @p: input
 * Return: Nothing
 */
void _print_reverse(char *s, int p)
{
	if (p != 0)
	{
		_putchar(*(s + p - 1));
	}
	p--;
	if (p > 0)
	{
		_print_reverse(s, p);
	}
}

/**
 * _print_rev_recursion - Do something
 * @s: input
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	_print_reverse(s, strlen(s));

}
