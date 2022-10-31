#include <string.h>
#include <ctype.h>
#include "main.h"

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

		if (strchr(" \t\n,;.!?\"(){}", c) != NULL)
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

int main(void)
{
    char str[] = "expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
