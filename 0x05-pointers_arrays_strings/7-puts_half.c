#include <string.h>
#include "main.h"

/**
 * puts_half - Puts half
 * @str: input
 * Return: Nothing
 */
void puts_half(char *str)
{
	int z = strlen(str);
	int s = z % 2 == 0 ? z / 2 : (z - 1) / 2;
	
	while (s < z)
	{
		_putchar(*(str + s));
		s++;
	}
	_putchar('\n');
}
