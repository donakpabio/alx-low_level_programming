#include <string.h>
#include "main.h"

/**
 * print_rev - Print reverse
 * @s: input
 * Return: Nothing
 */
void print_rev(char *s)
{
	int z = strlen(s);
	int e = z - 1;
	int i = e;

	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
