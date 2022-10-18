#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - writes the character c to stdout
 * @c: The character to print
 *
 * Return: result
 */
int _isalpha(int c)
{
	int a = isalpha(c) > 0 ? 1 : 0;
	int l = islower(c) > 0 ? 1 : 0;
	int u = isupper(c) > 0 ? 1 : 0;
	return (a && (l || u));
}
