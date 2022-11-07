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
	int l = strlen(s);
	int i = 0;

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
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	int i = 1;
	int c = 0;

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
