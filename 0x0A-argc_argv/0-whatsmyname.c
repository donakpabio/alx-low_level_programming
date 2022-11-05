#include <string.h>
#include "main.h"

/**
 * _putchar - Do something
 * @c: input
 * Return: result
 */
void _putchar(int c)
{
	putchar(c);
}

/**
 * main - Entry point
 * @argc: input
 * @argv: input
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int l = strlen(*(argv));
	int i = 0;

	while (i < l)
	{
		_putchar(*(*(argv) + i) + '0');
		i++;
	}
	_putchar('\n');
	exit(EXIT_SUCCESS);
}
