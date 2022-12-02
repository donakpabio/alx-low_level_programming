#include "main.h"

/**
 * print_binary - Do something
 * @n: input
 * Return: result
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		int i;
		int h;

		i = 31;
		h = 0;
		while (i >= 0)
		{
			if (n & (1 << i))
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
		printf("%d", (int) n);
	}
}
