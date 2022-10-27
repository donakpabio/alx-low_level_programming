#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * checker - Check
 * @c: input
 * Return: result
 */
int checker(char c)
{
        char s[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
        int i = 0;

        while (i < 13)
        {
                if (c == s[i])
                {
                        return (1);
                }
        }
        return (0);
}

/**
 * cap_string - Capitalize
 * @s: input
 * Return: result
 */
char *cap_string(char *s)
{
	int l = strlen(s);
	int i = 0;

	while (i < l)
	{
		char c = *(s + i);

		if (checker(c))
		{
			if (((i + 1) < l) && !(i == 0))
			{
				*(s + i + 1) = toupper(*(s + i + 1));
				i++;
				continue;
			}
		}
		i++;
	}
	return (s);
}
