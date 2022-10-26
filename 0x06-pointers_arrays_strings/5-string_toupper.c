#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * string_toupper - To upper case
 * @s: input
 * Return: result
 */
char *string_toupper(char *s)
{
	int l = strlen(s);
	int i = 0;

	while (i < l)
	{
		*(s + i) = toupper(*(s + i));
		i++;
	}
	return (s);
}
