#include <string.h>
#include "main.h"

/**
 * rev_string - Reverse string
 * @s: input
 * Return: Nothing
 */
void rev_string(char *s)
{
	int z = strlen(s);
	char r[z];
	int i = 0;

	
	while (i < z)
	{
		r[i] = *(s + (z - i - 1));
		i++;
	}

	i = 0;
	
	while (i < z)
        {
                *(s + i) = r[i];
                i++;
        }
}
