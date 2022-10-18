#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - writes the character c to stdout
 * @c: The character to print
 *
 * Return: result.
 */
int _islower(int c)
{
	return islower(c) > 0 ? 1 : 0;
}
