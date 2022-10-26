#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * cap_string - Capitalize
 * @: input
 * Return: result
 */
char *cap_string(char *s)
{
	int l = strlen(s);
	int i = 0;

	while (i < l)
	{
		char c = *(s + i);
		if (i == 0 || c ==',' || c == '\t' || c == '\n' || c == ' ' || c == ';' || c == '.' || c == '!' || c == '?' || c == '"' || c == '(' || c == ')' || c == '{' || c == '}')
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
