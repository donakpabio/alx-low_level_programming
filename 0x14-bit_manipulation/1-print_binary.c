#include "main.h"

/**
 * print_binary - Do something
 * @n: input
 * Return: result
 */
void print_binary(unsigned long int n)
{
	if (n > (unsigned long int) 1)
	{
		int i;
		int h;
		unsigned long int m;

		i = 31;
		h = 0;
		while (i >= 0)
		{
			m = (1 << i);
			if (n & m)
			{
				printf("1");
				h = 1;
			} else
			{
				if (h)
				{
					printf("0");
				}
			}
			i--;
		}
	} else
	{
		printf("%lu",  n);
	}
}
