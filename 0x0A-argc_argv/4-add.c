#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _isdigit - Is digit
 * @s: input
 * Return: result
 */
int _isdigit(char *s)
{
	int l = 0, i = 0;

	l = strlen(s);
	while (i < l)
	{
		if (isdigit(*(s + i)) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main - Main
 * @argc: input
 * @argv: input
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int i = 1, c = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		if (!_isdigit(*(argv + i)))
		{
			printf("Error\n");
			return (1);
		}
		c = c + atoi(*(argv + i));
		i++;
	}

	printf("%d\n", c);
	exit(EXIT_SUCCESS);
}
