#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - Do something
 * @s: input
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	int l = strlen(s);
	int i = 0;

	while (i < l)
	{
		_putchar(*(s + l - i - 1));
		i++;
	}
	_putchar('\n');
}
