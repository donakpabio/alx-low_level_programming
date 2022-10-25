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
	int i = 0;
	char f;
	char l;
	char *cc;

	cc = s;

	cc =strcpy(cc, s);
	
	while (i < z)
        {
		f = *(cc + i);
		l = *(cc + (z - i - 1));

                *(s + i) = l;
		*(s + (z - i - 1)) = f;
                i++;
        }
}
