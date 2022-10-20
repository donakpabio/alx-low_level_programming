#include <stdio.h>

/**
 * fibonacci - check the code.
 *
 * Return: Always Nothing
 */
void fibonacci(void)
{
	long f = 1;
	long l = 2;
	long h = 0;
	int i = 0;

	printf("1, 2, ");
	while (i < 48)
	{
		h = f + l;
		printf("%ld", h);
		if (i != (48 - 1))
		{
			putchar(',');
			putchar(' ');
		}
		f = l;
		l = h;
		i++;
	}

	putchar('\n');
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	fibonacci();
	return (0);
}
