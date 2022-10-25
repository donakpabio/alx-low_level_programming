#include "main.h"

/**
 * print_array - Print array
 * @a: input
 * @n: input
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
}

