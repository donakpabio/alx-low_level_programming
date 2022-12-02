#include <string.h>
#include "main.h"

/**
 * print_binary - Do something
 * @n: input
 * Return: result
 */
char *int_to_binary(unsigned long int n)
{
        int i;
        int s;
	char *b;

        i = 31;
        s = 0;
        while (i >= 0)
        {
                unsigned long int m;

                m = (1 << i);
                s = s == 0 ? (n & m) ? 1 : 0 : s;
                printf((n & m) ? "1" : s || (i == 0 && !s) ? "0" : "");
		b = strcat(b,(n & m) ? "1" : s || (i == 0 && !s) ? "0" : "");
                i--;
        }
	return b;
}

/**
 * get_bit - Do something
 * @n: input
 * @index: input
 * Return: result
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return 0;	
}

int main(void)
{
	printf("%s\n", int_to_binary(28));
	return 0;
}
