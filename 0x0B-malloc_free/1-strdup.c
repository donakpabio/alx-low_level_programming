#include <string.h>
#include "main.h"

/**
 * _strdup - Do something
 * @str: input
 * Return: result
 */
char *_strdup(char *str)
{
	if (str != NULL)
	{
		return (strdup(str));
	}
	return str;
}
