#include <stdio.h>

/**
 * fibonacci - check the code.
 *
 * Return: Always Nothing
 */
void fibonacci(void)
{
	int f = 1;
	int l = 2;
	int h = 0;

	printf("1, 2, ");
	while (l <= 50)
	{
		h = f + l;
		printf("%d, ", h);
		f = l;
		l = h;
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
