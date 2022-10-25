#include <string.h>
#include "main.h"

/**
 * rev_string - Reverse string
 * @s: input
 * Return: Nothing
 */
void rev_string(char *s)
{
	int l = strlen(s);
	int e = l - 1;
	int i = 0;
	char v;
	
	while (i < l/2)
	{
		v = *(s + i);
		*(s + i) = *(s + (e - i));
		*(s + (e - i)) = v;
		i++;
	}

}
