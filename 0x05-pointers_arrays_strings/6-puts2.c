#include <string.h>
#include "main.h"

/**
 * puts2 - Put something
 * @str: input
 * Return: Nothing
 */
void puts2(char *str)
{
	int z = strlen(str);
	int i = 0;

	while ((i <= z))
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
	_putchar('\n');
}
