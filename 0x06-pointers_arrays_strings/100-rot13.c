#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * rot13 - Do something
 * @s: input
 * Return: result
 */
char *rot13(char *s)
{
	char b[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char a[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int l = strlen(s);
	int i = 0;

	while (i < l)
	{
		int j = 0;

		while (j < 52)
		{
			if (*(s + i) == a[j])
			{
				*(s + i) = b[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
