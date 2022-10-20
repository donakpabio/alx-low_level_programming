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
	long s = 2;

	while (i < 48)
	{
		h = f + l;
		if (h < 4000000 && (h % 2 == 0))
		{
			s = s + h;
		}
		f = l;
		l = h;
		i++;
	}
	printf("%ld", s);
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
