#include "main.h"

/**
 * _strdup - Do something
 * @str: input
 * Return: result
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	char *a = malloc(strlen(str) * sizeof(char));

	a = str;
	return (a);
}
