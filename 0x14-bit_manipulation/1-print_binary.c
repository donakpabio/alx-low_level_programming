#include "main.h"

/**
 * print_binary - Do something
 * @n: input
 * Return: result
 */
void print_binary(unsigned long int n)
{
	if (n > 0)
	{
		int i;
		int s;

		i = 31;
		s = 0;
		while (i >= 0)
		{
			unsigned int m;

			m = (1 << i);
			s = s == 0 ? m == 1 : s;
			printf((n & m) ? "1" : s ? "0" : "");
			i--;
		}
	}
	printf("0");
}
